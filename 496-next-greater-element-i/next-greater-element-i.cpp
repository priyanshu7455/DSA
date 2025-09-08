class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        vector<int> ngs(n);
        stack<int> st;
        for (int i = nums2.size() - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }
            if (st.empty())
                ngs[i] = -1;
            else {
                ngs[i] = st.top(); // ya vo bada ha to remove nahi huaa so youko
                                   // lakar chalo;
            }
            st.push(nums2[i]);
        }

        vector<int> ans;
        for (int x : nums1) {
            for (int j = 0; j < n; j++) {
                if (nums2[j] == x) {
                    ans.push_back(ngs[j]);
                    break;
                }
            }
        }
        return ans;
    }
};