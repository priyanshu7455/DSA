class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;

        }
        unordered_map<char,int>raj;
        for(char c:s){
            raj[c]++;
        }

        for(char c:t){
            raj[c]--;
            if(raj[c]<0){
                return false;
            }

        }
        return true;
    }
};