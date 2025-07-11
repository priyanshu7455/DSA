class Solution {
public:
    int alternateDigitSum(int n) {
        int ans = 0;
        while(n){
            ans = (n % 10) - ans;
            n /= 10;            
        }
        return ans;
    }
};
