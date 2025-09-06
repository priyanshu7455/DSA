class MinStack {
public:
    long long mini;
    stack<long long> st;
    MinStack() {}

    void push(int value) {
        long long val = value;
        if (st.empty()) {
            mini = val;
            st.push(val);
        } else {
            if (val < mini) {
                st.push(2 * val  - mini);
                mini = val;
            } else {
                st.push(val);
            }
        }
    }

    void pop() {
        if (st.empty())
            return;
        long long el = st.top();
        st.pop();

        if (el < mini) {
            mini = 2 * mini - el;
        }
    }

    int top() {
        if (st.empty())
            return -1;
        long long el = st.top();
        if (el < mini)
            return mini;
        return el;
    }

    int getMin() { if (st.empty())
            return -1; // or throw exception
        return mini; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */