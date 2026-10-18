class Solution {
public:
    string longestPalindrome(string s) {

        string ans = "";

        for(int i = 0; i < s.size(); i++) {

            int left = i;
            int right = i;

            while(left >= 0 && right < s.size() && s[left] == s[right]) {

                if(right - left + 1 > ans.size()) {
                    ans = s.substr(left, right - left + 1);
                }

                left--;
                right++;
            }

            left = i;
            right = i + 1;

            while(left >= 0 && right < s.size() && s[left] == s[right]) {

                if(right - left + 1 > ans.size()) {
                    ans = s.substr(left, right - left + 1);
                }

                left--;
                right++;
            }
        }

        return ans;
    }
};