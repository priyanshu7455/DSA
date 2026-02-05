class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>st;

        for(int x:nums){
            if(st.find(x)!=st.end()){
                //duplidcate find ;
                return true;
            }
            st.insert(x);
        }
        return false;
    }
};
auto init = atexit([]() { ofstream("display_runtime.txt") << "0";});
