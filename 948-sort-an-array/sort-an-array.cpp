class Solution {
public:
    void merges(vector<int>& nums, int l, int r, int mid) {
        vector<int> raj;
        int left = l;
        int right = mid + 1;
        while (left <= mid && right <= r) {
            if (nums[left] <= nums[right]) {
                raj.push_back(nums[left]);
                left++;
            } else {
                raj.push_back(nums[right]);
                right++;
            }
        }
        while (left <= mid) {
            raj.push_back(nums[left]);
            left++;
        }
        while (right <= r) {
            raj.push_back(nums[right]);
            right++;
        }
        for (int i = l; i <= r; i++) {
            nums[i] = raj[i - l];
        }
    }

    void mergeshort(vector<int>& nums, int l, int r) {
        if (l >= r)
            return;
        int mid = l + (r - l) / 2;
        mergeshort(nums, l, mid);
        mergeshort(nums, mid + 1, r);
        merges(nums, l, r, mid);
    }
    vector<int> sortArray(vector<int>& nums) {

        mergeshort(nums, 0, nums.size() - 1);
        return nums;
    }
};