class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mpp;
        mpp[0]=1;
     int pri=0;int count=0;
     for(int i=0;i<nums.size();i++){
        pri+=nums[i];
        int remove=pri-k;
        count+=mpp[remove];
        mpp[pri]++;
     }
     return count;

    }
};