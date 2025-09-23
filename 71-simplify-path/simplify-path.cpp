class Solution {
public:
    string simplifyPath(string path) {
        vector<string>st;
        string dir="";

        for(int i=0;i<=path.size();i++){
            if(i==path.size()|| path[i]=='/'){
                if(dir==""||dir=="."){}
                else if(dir==".."){
                    if(!st.empty()) st.pop_back();
                }else{
                    st.push_back(dir);
                }
                dir.clear();
            }else{
                dir+=path[i];
            }
        }
        string res = "/";
        for(int i=0;i<st.size();i++){
            if(i) res+="/";
            res+=st[i];
        }
        return res;
    }
};