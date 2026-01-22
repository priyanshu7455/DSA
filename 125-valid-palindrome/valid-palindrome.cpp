class Solution {
    int k = 0;
public:
    bool isPalindrome(string s) {
        
        string cleaned;
        for (char c : s) {
            if (isalnum(c)) {/////// clean the string 
                cleaned += tolower(c);
            }
        }

        
        return check(cleaned); // check string 
    }

    bool check(const string &s) {
        if (k >= s.size() / 2) {
            k = 0;
            return true;
        }
        if (s[k] != s[s.size() - k - 1]) {
        
            return false;
        }
        k++;
        return check(s);
    }
};
