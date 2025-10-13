class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int right=0;
        int zerocount=0;
        int maxlen=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]==0){
                zerocount++;

            }
            if(zerocount>k){
                if(nums[left]==0){
                    zerocount--;
                }

                left++; //shift the windo from left;
            }
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};