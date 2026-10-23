class LRUCache {
public:

    int capacity;


    list<pair<int, int>> lru;

    unordered_map<int, list<pair<int, int>>::iterator> mp;

    LRUCache(int capacity) {
        this->capacity = capacity;
    }

    int get(int key) {

        if (mp.find(key) == mp.end()) {
            return -1;
        }

        auto it = mp[key];

        int value = it->second;

        lru.erase(it);
        lru.push_back({key, value});

        mp[key] = prev(lru.end());

        return value;
    }

    void put(int key, int value) {

        if (mp.find(key) != mp.end()) {


            lru.erase(mp[key]);

            lru.push_back({key, value});

            mp[key] = prev(lru.end());

            return;
        }
        lru.push_back({key, value});
        mp[key] = prev(lru.end());

        if (lru.size() > capacity) {

            int oldKey = lru.front().first;

            mp.erase(oldKey);
            lru.pop_front();
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */