class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == divisor) {
            return 1;
        }
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        // bool sign = true;
        // if (dividend >= 0 && divisor < 0)
        //     sign = false;
        // else if (dividend <= 0 && divisor > 0)
        //     sign = false;

        int sign = dividend > 0 ^ divisor > 0 ? -1 : 1;
         long n = labs(( long)dividend);
        long d = labs(( long)divisor);

        // divisor = abs(divisor);
        long ans = 0;

        while (n >= d) {
            int cnt = 0;
            while (n >= (d << (cnt + 1))) {
                cnt += 1;
            }
            ans += 1 << cnt; // store the 2 ki power jaha tak while sa gaye ha ;
            n -= (d << cnt);
        }
        return sign * ans;
    }
};