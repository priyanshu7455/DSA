class Solution {
public:

    bool isvowel(char c){
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
    int maxVowels(string s, int k) {
        int n=s.size();
        int count=0;
        int firs=0;
        for(int i=0;i<k;i++){
            if(isvowel(s[i])){
                count++;
            }
        }
        int maxi=count;
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