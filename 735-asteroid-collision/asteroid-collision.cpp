class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>st;
        for(int i=0;i<asteroids.size();i++){
            int curr = asteroids[i];
           

            if (curr > 0) {
                st.push_back(curr);
            }else{
                while (!st.empty() && st.back() > 0 && st.back() < abs(curr)) {
                    st.pop_back();   // smaller positive destroyed
                }
                 if (!st.empty() && st.back() == abs(curr)) {
                    st.pop_back();   // both destroyed
                } else if (st.empty() || st.back() < 0) {
                    st.push_back(curr);  // safe to add negative
                }
            }
        }
        return st;
    }
};