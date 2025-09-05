class Solution {
public:
    bool isValid(string s) {
        stack<char>s1;
        for(auto it:s){
            if(it=='(' || it=='{'||it=='['){
                s1.push(it);
            }
            else{
                if(s1.size()==0)return false;
                char ch=s1.top();
                s1.pop();
                if((it==')') and ch=='(' or (it=='}' and ch=='{') or(it==']')and ch=='[') continue;
                else{
                    return false;
                }
            }
        }
        return s1.empty();
    }
};