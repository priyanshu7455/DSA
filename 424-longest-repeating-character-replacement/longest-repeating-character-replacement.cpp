class Solution {
public:
    int characterReplacement(string s, int k) {
        int freq[26] = {0};

        int left=0;
        int maxfreq=0;
        int maxwindo=0;

        for(int right=0;right<s.size();right++){
            freq[s[right]-'A']++;

            maxfreq=max(maxfreq,freq[s[right]-'A']);

            int windosize=right-left+1;

            if(windosize-maxfreq>k){
                //so trim down 
                freq[s[left]-'A']--;
                left++;

            }

             windosize=right-left+1;
             maxwindo=max(maxwindo,windosize);
        }
        return maxwindo;

    }
};