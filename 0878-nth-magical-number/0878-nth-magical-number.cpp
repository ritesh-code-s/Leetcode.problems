class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {

        long long MOD = 1000000007;

        long long l = 1;
        long long r = 1LL * n * min(a, b);

        long long lcm = 1LL * a / gcd(a, b) * b;

        while (l <= r) {

            long long mid = l + (r - l) / 2;

            long long count = mid / a + mid / b - mid / lcm;

            if (count >= n) {
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        return l % MOD;
    }
};