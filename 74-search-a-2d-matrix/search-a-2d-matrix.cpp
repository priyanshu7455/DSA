class Solution {
public:
    bool letsdo(vector<int>&arr,int x){
        int low=0;
        int high=arr.size()-1;
        int ans=arr.size();
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==x){
                return true;
            }else if(arr[mid]>x){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            if(letsdo(matrix[i],target)){
                return true;
            }
        }
        return false;
    }
};