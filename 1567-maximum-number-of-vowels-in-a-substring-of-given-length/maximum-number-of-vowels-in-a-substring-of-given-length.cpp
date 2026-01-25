class Solution {
public:
    bool isvowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {
        int n=s.size();
        int count=0;//it will be count how may vouvel in ther baby;
        //now make a windo first windo ;
        for(int i=0;i<k;i++){
            if(isvowel(s[i])){
                count++;
            }
        }
        int maxi=count;

        //now baby shift the widnow  and add right remove left;
        for(int i=k;i<n;i++){
            if(isvowel(s[i])){
                count++;
            }
            if(isvowel(s[i-k])){
                 count--;
            }
            maxi=max(maxi,count);

        }
        return maxi;
    }
};