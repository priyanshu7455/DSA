class Solution {
public:
    int number(vector<int>arr,int mid){
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=ceil((double)(arr[i]) / (double)(mid));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& arr, int threshold) {
        int n=arr.size();
        int low=1;int high=*max_element(arr.begin(), arr.end());
        if(n>threshold) return -1;
        int ans=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            if(number(arr,mid)<=threshold){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};