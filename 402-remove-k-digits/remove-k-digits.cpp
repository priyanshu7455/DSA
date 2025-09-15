class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        for (int i = 0; i < num.size(); i++) {
            while (
                !st.empty() && k > 0 &&
                (st.top() - '0') >
                    (num[i] - '0')) { // this give index value conditon type ;
                st.pop();

                k = k - 1;
            }
            st.push(num[i]);
        }
        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }

        if (st.empty())
            return "0";

        string reg = "";
        while (!st.empty()) {
            reg.push_back(st.top()); // O(1)   reg=reg+st.top();  0(n^2);
            st.pop();
        }

        reverse(reg.begin(), reg.end());

        while (reg.size() > 1 && reg[0] == '0') {
            reg.erase(reg.begin());
        }

        // reverse(reg.begin(), reg.end());
        if (reg.empty())
            return "0";
        return reg;
    }
};