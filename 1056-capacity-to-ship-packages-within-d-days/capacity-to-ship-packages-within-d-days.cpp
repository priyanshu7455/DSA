class Solution {
public:
    int daysreq(vector<int>&we ,int mid){
        int n=we.size();
        int day=1; int load=0;
        for(int i=0;i<n;i++){
            if(load+we[i]>mid){
                day=day+1;//next day jaya ga sir ;
                load=we[i];//next day vo wala wetihgt rahaga na ;
            }
            else{
                load+=we[i];// if nahi ha ot load ma + kar do ;
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& arr, int days) {
        int n=arr.size();
        int low=*max_element(arr.begin(),arr.end());
        int high=accumulate(arr.begin(), arr.end(), 0);
        int ans=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            if((daysreq(arr,mid))<=days){
                high=mid-1;

            }else{
                low=mid+1;
            }
        }
        return low;
        
    }
};