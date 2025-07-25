class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxie= INT_MIN;
        int pre=1;
        int suf=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(pre==0) pre=1;
            if(suf==0) suf=1;

            pre=pre*nums[i];
            suf=suf*nums[n-i-1];// this is always start form the last;

            maxie=max(maxie,max(pre,suf));

        }
        return maxie;
    }
};