class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int maxSum=sum;
        //next window
        for(int r=k;r<n;r++){
            sum=sum-nums[r-k]+nums[r];
            maxSum=max(maxSum,sum);
        }
        return(double)maxSum/k;
        }
};