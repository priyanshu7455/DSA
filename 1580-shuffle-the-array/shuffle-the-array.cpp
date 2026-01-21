class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> raj;
        for (int i = 0; i < n; i++) {
            raj.push_back(nums[i]);
            raj.push_back(nums[i + n]);
        }
        return raj;
    }
};