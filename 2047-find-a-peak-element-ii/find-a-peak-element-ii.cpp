class Solution {
public:
    int maxelement(vector<vector<int>>& arr, int n, int m, int mid) {
        int max_element = -1;
        int index = -1;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i][mid] > max_element) {
                max_element = arr[i][mid];
                index = i;
            }
        }
        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0;
        int high = m - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            int maxRowIndex = maxelement(mat, n, m, mid);

            int left = (mid - 1 >= 0) ? mat[maxRowIndex][mid - 1] : -1;
            int right = (mid + 1 < m) ? mat[maxRowIndex][mid + 1] : -1;

            if (mat[maxRowIndex][mid] > left && mat[maxRowIndex][mid] > right) {
                return {maxRowIndex, mid};
            } else if (mat[maxRowIndex][mid] < left) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return {-1, -1};
    }
};
