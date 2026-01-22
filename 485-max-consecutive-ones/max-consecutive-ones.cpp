class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int si=nums.size();
        int count=0;
        int maxi=0;
        for(int i=0;i<si;i++){
            if(nums[i]==1){
                count++;
                maxi=max(maxi,count);
            }
            else{
                count=0;
            }
        }
        return maxi;
    }
};