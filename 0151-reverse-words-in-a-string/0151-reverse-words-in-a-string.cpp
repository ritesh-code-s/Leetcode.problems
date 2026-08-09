class Solution {
public:
    string reverseWords(string s) {

        int left = 0;
        int right = s.size();

        vector<string> ans;

        while (left < right) {

            while (left < right && s[left] == ' ') {

                left++;
            }

            if (left == right) {
                
                break;
            }

            int start = left;

            while (left < right && s[left] != ' ') {

                left++;
            }

            string word = s.substr(start, left - start);

            ans.push_back(word);
        }

        string result = "";

        for (int i = ans.size() - 1; i >= 0; i--) {

            result += ans[i];

            if (i != 0) {
                result += " ";
            }
        }

        return result;
    }
};