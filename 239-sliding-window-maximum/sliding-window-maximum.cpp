class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>ans;

        for(int i=0;i<nums.size();i++){
            if(!dq.empty() && dq.front()==i-k){//copy ma dakho all clear 
                dq.pop_front();//this is just out of the bond check kara ga 
            }
            while(!dq.empty() && nums[dq.back()]<nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            if(i>=k-1) ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};