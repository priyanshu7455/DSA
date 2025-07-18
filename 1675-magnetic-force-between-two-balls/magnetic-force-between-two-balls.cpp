class Solution {
    bool canweput(vector<int>arr,int mid,int m){
        int cnut=1;int last=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]-last>=mid){
                cnut++;
                last=arr[i];
            }
            if(cnut>=m) return true;
        }
        return false;
    }
public:
    int maxDistance(vector<int>& arr, int m) {
        sort(arr.begin(), arr.end()); 
        int n=arr.size();
        int low=1;
        int high=arr[n-1]-arr[0];
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(canweput(arr,mid,m)==true){
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
};