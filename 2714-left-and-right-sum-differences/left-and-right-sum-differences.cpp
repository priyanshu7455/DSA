class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }
        vector<int>ans;
       int  leftsum=0;

        for(int i=0;i<nums.size();i++){
            int rightsum=total-nums[i];
            ans.push_back(abs(leftsum-rightsum));
            leftsum+=nums[i];
            total=rightsum;

        }
        return ans;
    }
};