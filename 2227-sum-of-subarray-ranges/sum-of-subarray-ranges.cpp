class Solution {
public:
    vector<int> findNSE(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            int currEle = arr[i]; // current elemet
                /* Pop the elements in the stack until
                the stack is not empty and the top
                element is not the smaller element */
                while (!st.empty() && arr[st.top()] >= currEle) {
                st.pop();
            }
            ans[i] = !st.empty() ? st.top() : n;

            /* Push the index of current
            element in the stack */
            st.push(i);
        }
        return ans;
    }

    vector<int> findNGE(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            // Get the current element
            int currEle = arr[i];

            /* Pop the elements in the stack until
            the stack is not empty and the top
            element is not the greater element */
            while (!st.empty() && arr[st.top()] <= currEle) {
                st.pop();
            }
            ans[i] = !st.empty() ? st.top() : n;

            /* Push the index of current
            element in the stack */
            st.push(i);
        }
        return ans;
    }
    /* Function to find the indices of
    previous smaller or equal elements */
    vector<int> findPSEE(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            int currEle = arr[i];

            /* Pop the elements in the stack until
          the stack is not empty and the top
          elements are greater than the current element */
            while (!st.empty() && arr[st.top()] > currEle) {
                st.pop();
            }
            ans[i] = !st.empty() ? st.top() : -1;
            st.push(i);
        }
        return ans;
    }
    vector<int> findPGEE(vector<int>& arr) {

        // Size of array
        int n = arr.size();

        // To store the answer
        vector<int> ans(n);

        // Stack
        stack<int> st;

        // Traverse on the array
        for (int i = 0; i < n; i++) {

            // Get the current element
            int currEle = arr[i];

            /* Pop the elements in the stack until
            the stack is not empty and the top
            elements are smaller than the current element */
            while (!st.empty() && arr[st.top()] < currEle) {
                st.pop();
            }

            // Update the answer
            ans[i] = !st.empty() ? st.top() : -1;

            /* Push the index of current
            element in the stack */
            st.push(i);
        }

        // Return the answer
        return ans;
    }
    long long sumSubarrayMins(vector<int>& arr) {
        vector<int> nse1 =findNSE(arr);
        vector<int> pse =findPSEE(arr);
       
        long long count=0;
        for(int i=0;i<arr.size();i++){
            long long first=i-pse[i];
            long long second=nse1[i]-i;
            long long prod=first*second;
            prod=prod*arr[i];
            count=count+prod;

        }
        return count;
    }
     long long sumSubarrayMax(vector<int>& arr) {
        vector<int> nse1 =findNGE(arr);
        vector<int> pse =findPGEE(arr);
       
        long long count=0;
        for(int i=0;i<arr.size();i++){
            long long first=i-pse[i];
            long long second=nse1[i]-i;
            long long prod=first*second;
            prod=prod*arr[i];
            count=count+prod;

        }
        return count;
    }

    long long subArrayRanges(vector<int>& nums) {
        return sumSubarrayMax(nums) - sumSubarrayMins(nums);
    }
};