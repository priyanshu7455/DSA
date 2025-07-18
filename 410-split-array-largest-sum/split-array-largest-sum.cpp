class Solution {
public:
    int waystosplit(vector<int>&arr,int mid){
        int n=arr.size();
        int count=1;//not of way we split it
        long long subarrsum=0;
        for(int i=0;i<n;i++){
            if(subarrsum+arr[i]<=mid){
                subarrsum+=arr[i];
            }else{
                count++;
                subarrsum=arr[i];
            }
        }
        return count;

    }
    int splitArray(vector<int>& arr, int k) {
        int low=*max_element(arr.begin(),arr.end());
        int high=accumulate(arr.begin(),arr.end(),0);
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            int fun=waystosplit(arr,mid);
            if(fun<=k){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
        
    }
};