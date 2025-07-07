class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        // Merge both arrays into ans
        for (int i = 0; i < nums1.size(); i++) {
            ans.push_back(nums1[i]);  // fixed here
        }

        for (int i = 0; i < nums2.size(); i++) {
            ans.push_back(nums2[i]);  // fixed here
        }

        // Sort the combined array
        sort(ans.begin(), ans.end());

        int n = ans.size();

        // Find median
        if (n % 2 == 0) {
            return (ans[n / 2] + ans[n / 2 - 1]) / 2.0;
        } else {
            return ans[n / 2];
        }
    }
};
