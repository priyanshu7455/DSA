class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    long long maxi = LONG_MIN; // maximum sum
    long long sum = 0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        sum=sum+nums[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }

    }
    return maxi;
        
    }
};