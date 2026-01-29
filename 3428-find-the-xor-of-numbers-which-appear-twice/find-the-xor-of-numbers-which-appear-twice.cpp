class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>raj;
        int ans=0;
        for(int x:nums){
            raj[x]++;
        }

        for(auto it : raj){
            if(it.second==2){
                ans=ans^it.first;
            }
        }
        return ans;
    }
};