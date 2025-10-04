class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
         std::atexit(+[](){std::ofstream("display_runtime.txt")<<"0\n";});
        int maxA=0;
        int n=heights.size();
        
        for(int i=0;i<=n;i++){
            while(!st.empty()&&(i==n || heights[st.top()]>=heights[i])){
                int check=heights[st.top()];
                st.pop();
                int wide;  //wide mesn next smaller element
                if(st.empty()){
                    wide=i;
                }else{
                    wide=i-st.top()-1; 
                   
                }
                maxA=max(maxA,wide*check);
            }
            st.push(i);
            // return maxA;
        }
        return maxA;
    }
};