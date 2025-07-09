class Solution {
public:
     int Lower(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int ans = n;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] >= target) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
    int Upper(vector<int>& nums1, int x) {

        int n = nums1.size();
        int low = 0;
        int high = n - 1;
        int ans1 = n;
        while (low <= high) {
            int mid2 = (low + high) / 2;
            if (nums1[mid2] > x) {
                ans1 = mid2;
                high = mid2 - 1;
            } else {
                low = mid2 + 1;
            }
        }
        return ans1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = Lower(nums, target);
        if (lb == nums.size() || nums[lb] != target)
            return {-1, -1};
        return {lb, Upper(nums, target) - 1};
    }
};