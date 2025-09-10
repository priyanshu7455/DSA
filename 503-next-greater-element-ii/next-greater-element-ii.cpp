class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ngs(n);
        stack<int> st;
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty() && st.top() <= nums[i%n]){
                st.pop();
            }

            if(i<n){
                if(st.empty()) {
                    ngs[i]=-1;
                }else{
                    ngs[i]=st.top();
                }
            }
            st.push(nums[i%n]);
        }
        return ngs;
    }
};