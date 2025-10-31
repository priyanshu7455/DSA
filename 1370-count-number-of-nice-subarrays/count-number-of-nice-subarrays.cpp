class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int goal) {
         return coungAtmost(nums, goal) - coungAtmost(nums, goal - 1);
    }
    int coungAtmost(vector<int>& nums,int goal){
        int l=0;int sum=0;
         int count=0;
        for(int r=0;r<nums.size();r++){
            // If current number is odd, reduce k
           sum+=(nums[r]%2);
           while(sum>goal){
            sum-=(nums[l]%2);
            l++;
           }
            count+=(r-l+1);

        }
        return count;
    }
};