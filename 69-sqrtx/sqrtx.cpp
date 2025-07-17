class Solution {
public:
    int mySqrt(int x) {
        int low=1;
        int high=x;
        if(x==0)return 0;
        int ans=0;
        while(low<=high){
            long long mid=low+ (high-low)/2;
            long long mid2=(mid*mid);
            if(mid2<=x){
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
        
    }
};