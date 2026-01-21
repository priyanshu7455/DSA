class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int index = 1;
        // for (int i = 1; i < nums.size(); i++) {
        //     if (nums[i] != nums[i - 1]) {
        //         nums[index] = nums[i];
        //         index++;
        //     }
        // }
        // return index;
        int slow=0;
        for(int fast=1;fast<nums.size();fast++){
            if(nums[slow]!=nums[fast]){
                slow++;
                nums[slow]=nums[fast];
            }
            // return slow+1;
        }
         return slow+1;
    }
};