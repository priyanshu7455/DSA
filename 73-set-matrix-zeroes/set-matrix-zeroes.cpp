class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();        // n = 3 (3 rows)
    int m = matrix[0].size();     // m = 3 (3 columns)
        int col0=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    //mark i-th row zero;
                    matrix[i][0]=0;

                    if(j!=0){
                        matrix[0][j]=0;
                    }else{
                        col0=0;
                    }
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
              
                    if(matrix[i][0]==0 || matrix[0][j]==0){
                        matrix[i][j]=0;
                    }
                

            }
        }
        if (matrix[0][0] == 0) {
        for (int j = 0; j < m; j++) {
            matrix[0][j] = 0;
        }
    }
    if (col0 == 0) {
        for (int i = 0; i < n; i++) {
            matrix[i][0] = 0;
        }
    }
        
    }
};
// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         int n = matrix.size();        
//         int m = matrix[0].size();     
//         int col0 = 1;

//         // Step 1: Use first row/column as markers
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 if (matrix[i][j] == 0) {
//                     matrix[i][0] = 0;
//                     if (j != 0) {
//                         matrix[0][j] = 0;
//                     } else {
//                         col0 = 0;
//                     }
//                 }
//             }
//         }

//         // Step 2: Update matrix based on markers
//         for (int i = 1; i < n; i++) {
//             for (int j = 1; j < m; j++) {
//                 if (matrix[i][0] == 0 || matrix[0][j] == 0) {
//                     matrix[i][j] = 0;
//                 }
//             }
//         }

//         // Step 3: Update first row if needed
//         if (matrix[0][0] == 0) {
//             for (int j = 0; j < m; j++) {
//                 matrix[0][j] = 0;
//             }
//         }

//         // Step 4: Update first column if needed
//         if (col0 == 0) {
//             for (int i = 0; i < n; i++) {
//                 matrix[i][0] = 0;
//             }
//         }
//     }
// };
