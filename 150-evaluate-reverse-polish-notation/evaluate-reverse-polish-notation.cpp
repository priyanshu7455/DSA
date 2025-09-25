class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string c: tokens){
            if(c=="+"){
                int second=st.top(); st.pop();
                int first=st.top();st.pop();
                st.push(first+second);//what value got pus in stact
            }else if(c=="-"){
                int second=st.top(); st.pop();
                int first=st.top();st.pop();
                st.push(first-second);//what value got pus in stact
            }else if(c=="*"){
                int second=st.top(); st.pop();
                int first=st.top();st.pop();
                st.push(first*second);//what value got pus in stact
            }else if(c=="/"){
                int second=st.top(); st.pop();
                int first=st.top();st.pop();
                st.push(first/second);//what value got pus in stact
            }else{
                st.push(stoi(c));//string to integer stoi
            }
        }
        return st.top();
    }
};