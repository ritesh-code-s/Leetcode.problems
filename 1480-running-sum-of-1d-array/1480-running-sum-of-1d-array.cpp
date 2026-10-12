class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int ans = 0;
        vector<int>annss;

        for(int i = 0; i < nums.size();i++) {

            ans += nums[i];

            annss.push_back(ans);
        }

        return annss;
        
    }
};