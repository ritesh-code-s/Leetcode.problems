class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0)
            return false;

        int i = 1;

        while (i <= n / 2) {
            i = i * 3;
        }

        return i == n;
    }
};