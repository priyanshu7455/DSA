class Solution {
public:
    int possible(vector<int>& arr, int day, int m, int k) {
        int count = 0;
        int nofb = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= day) {
                count++;
            } else {
                nofb += count / k;
                count = 0;
            }
        }
        nofb += (count / k); /// this will check after the cont=0 ;
        return nofb >= m;
    }
    int minDays(vector<int>& arr, int m, int k) {
        long long raj = 1LL*m * k;
        int n = arr.size();
        if (raj > n)
            return -1;
        int mini = INT_MAX, maxi = INT_MIN;

        for (int i = 0; i < n; i++) {
            mini = min(mini, arr[i]);
            maxi = max(maxi, arr[i]);
        }

        int low = mini;
        int high = maxi;
        int ans = INT_MAX;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (possible(arr, mid, m, k)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};