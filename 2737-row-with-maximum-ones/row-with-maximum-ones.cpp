class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int index = -1;
        int max_count = 0;
        for (int i = 0; i < mat.size(); i++) {
            int num_of_one = 0;
            for (int x : mat[i]) {
                if (x == 1) num_of_one++;
            }
            if (num_of_one > max_count || (num_of_one == max_count && (index == -1 || i < index))) {
                max_count = num_of_one;
                index = i;
            }
        }
        return {index, max_count};
    }
};
