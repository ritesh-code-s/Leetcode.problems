class Solution {
public:
    bool isPowerOfFour(int n) {

        if (n <= 0)
            return false;

        int i = 1;

        while (i <= n / 4) {
            i = i * 4;
        }

        return i == n;
    }
};