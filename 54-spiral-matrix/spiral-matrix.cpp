class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans; // To store the elements in spiral order
        int n = matrix.size();       // Total number of rows
        int m = matrix[0].size();    // Total number of columns

        // Define the boundaries of the matrix
        int top = 0;           // Start row
        int left = 0;          // Start column
        int bottom = n - 1;    // End row
        int right = m - 1;     // End column

        // Loop until all elements are traversed
        while (left <= right && top <= bottom) {

            // Traverse from left to right along the top row
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++; // Move the top boundary down

            // Traverse from top to bottom along the rightmost column
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--; // Move the right boundary left

            // Check if there are rows left to process (to avoid duplicate row traversal)
            if (top <= bottom) {
                // Traverse from right to left along the bottom row
                for (int i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--; // Move the bottom boundary up
            }

            // Check if there are columns left to process (to avoid duplicate column traversal)
            if (left <= right) {
                // Traverse from bottom to top along the leftmost column
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++; // Move the left boundary right
            }
        }

        return ans; // Return the spiral order list
    }
};
