class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0, count2 = 0;
        int candiate1 = 0, candiate2 = 1; // different init to avoid conflict

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == candiate1) {
                count1++;
            } else if (nums[i] == candiate2) {
                count2++;
            } else if (count1 == 0) {
                candiate1 = nums[i];
                count1 = 1;
            } else if (count2 == 0) {
                candiate2 = nums[i];
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }

        // Count frequency again
        int fre1 = 0, fre2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == candiate1) {
                fre1++;
            } else if (nums[i] == candiate2) {
                fre2++;
            }
        }

        vector<int> ans;
        if (fre1 > nums.size() / 3) {
            ans.push_back(candiate1);
        }
        if (fre2 > nums.size() / 3) {
            ans.push_back(candiate2);
        }
        return ans;
    }
};
