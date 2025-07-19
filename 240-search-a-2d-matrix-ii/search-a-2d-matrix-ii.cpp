class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        // start at top-right
        int row = 0, col = cols - 1;

        while (row < rows && col >= 0) {
            int current = matrix[row][col];
            // found
            if (current == target) return true;
            // move left
            else if (target < current) col--;
            // move down
            else row++;
        }
        return false; // not found
    }
};