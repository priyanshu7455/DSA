class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=prices[0];
        int maxp=0;
        int si=prices.size();
        for(int i=1;i<si;i++){
            int coust=prices[i]-minp;
             maxp=max(maxp,coust);
            minp=min(minp,prices[i]);;
        }
        return maxp;
        
    }
};