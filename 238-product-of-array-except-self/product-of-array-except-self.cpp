class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> leftproduct(n),rightproduct(n),ans(n);

        leftproduct[0]=1;
        for(int i=1;i<n;i++){
            leftproduct[i]=leftproduct[i-1]*nums[i-1];
        }



        rightproduct[n-1]=1;
        for(int i=n-2;i>=0;i--){
            rightproduct[i]=rightproduct[i+1]*nums[i+1];
        }

        for(int i=0;i<n;i++){
            ans[i]=leftproduct[i]*rightproduct[i];
        }

        return ans;



    }
};