class Solution {
public:
    int search(vector<int>& arr, int target) {
     int n=arr.size();
       int low=0;int high=n-1; 
       while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target) return mid;
        //left sorted ;
        if(arr[low]<=arr[mid]) {
            if(arr[low]<=target && target<=arr[mid]){
                high=mid-1;//elemtn the right lasf

            }
            else{
                low=mid+1;
            }

        } 
        //right sorted;
          else{
            if(arr[mid]<=target && target<=arr[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }

        }                            
       }
       return -1;
    }
};