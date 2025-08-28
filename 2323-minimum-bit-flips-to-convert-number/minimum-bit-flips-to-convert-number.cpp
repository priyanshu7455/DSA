class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans=start^goal;
        int final =__builtin_popcount(ans);
        return final;
    }
};