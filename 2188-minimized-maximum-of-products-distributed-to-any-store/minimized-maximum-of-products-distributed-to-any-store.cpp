class Solution {
public:
    bool possibletodis(vector<int>&arr,int mid,int n){
        int requiredstore=0;
        for(int i=0;i<arr.size();i++){
            requiredstore+=(arr[i] + mid - 1) / mid;//////ceil(arr[i]/mid); we can use it but nee to type cast (int)ceil((double)arr[i] / mid);
        }
        return requiredstore<=n;
    }
    int minimizedMaximum(int n, vector<int>& arr) {
        int low=1;
        int high=*max_element(arr.begin(),arr.end());
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(possibletodis(arr,mid,n)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
        
    }
};