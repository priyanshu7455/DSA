class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int maxsum=sum;
        for(int i=k;i<n;i++){
            sum=sum - nums[i-k]+nums[i];
            maxsum=max(maxsum,sum);
        }
        return (double)maxsum/k;
    }
};