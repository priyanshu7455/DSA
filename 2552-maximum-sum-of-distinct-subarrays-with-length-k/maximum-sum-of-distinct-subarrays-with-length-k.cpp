class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        long long maxsum=0;
        long long current=0;
        int j=0;
        int i=0;
        unordered_set<int>st;

        while(j<n){
           while(st.count(nums[j])){   //this will check baby if it in set so omove i befoe it remove and sub;
            current-=nums[i];
            st.erase(nums[i]);
            i++;
           }

           current+=nums[j];
           st.insert(nums[j]);

           // one more contidon if size is full like 3 so we have to remove last then we move ok 
           if(j-i+1==k){
            maxsum=max(maxsum,current);
            current-=nums[i];
            st.erase(nums[i]);
            i++;
           }

           j++;
        }
        return maxsum;
    }
};