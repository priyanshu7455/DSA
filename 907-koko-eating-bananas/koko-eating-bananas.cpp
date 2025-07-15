class Solution {
public:
    int findmaxi(vector<int>& arr) {
        int maxi = INT_MIN;
        for (int i = 0; i < arr.size(); i++) {
            maxi = max(maxi, arr[i]);
        }
        return maxi;
    }

    long long timetaken(vector<int>& arr, int rida) {
        //  if (rida == 0) return INT_MAX;
        long long time = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            time += ceil((double)(arr[i]) / (double)(rida));
        }
        return time;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int ans = INT_MAX;
        int high = findmaxi(piles);
        while (low <= high) {
            int mid =  (low+high)  / 2;
            long totalhours = timetaken(piles, mid);
            if (totalhours <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};