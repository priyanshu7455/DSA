class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n=arr.size();
        if(n == 1) return arr[0];
        if(arr[0]!=arr[1]){
            return arr[0];
        }
        if(arr[n-1]!=arr[n-2]){
            return arr[n-1];
        }
        int low=1;
        int high=n-2;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
                return arr[mid];//it mesas it was the ans
            }
            // thsi is for the left first one is if it odd index and secod for it it on even so we check odd so even and if we are at even so check odd
            if(mid%2==1 && arr[mid-1]==arr[mid] || mid%2==0 && arr[mid+1]==arr[mid]){
                low=mid+1;

            }else{  //thsi is for the right half
                high=mid-1;
            }
        }
        return -1;
    }
};