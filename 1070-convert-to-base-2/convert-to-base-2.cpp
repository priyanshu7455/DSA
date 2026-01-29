class Solution {
public:
    string baseNeg2(int n) {
        if(n==0) return "0";

        string raj="";
        while(n!=0){
            int rev=n%-2;
            n=n/-2;;

            if(rev<0){
                rev+=2;
                n+=1;
            }
            raj=to_string(rev)+raj;
        }
        return raj;
    }
};