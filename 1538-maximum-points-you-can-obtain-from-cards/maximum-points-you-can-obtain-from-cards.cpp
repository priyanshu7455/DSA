class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n= cardPoints.size();
        int left=0;
        for(int i=0;i<k;i++){
            left=left+cardPoints[i];

        }
        int maxi=left;
        int right=0;
        int ri=n-1;

        for(int i=k-1;i>=0;i--){
            left=left-cardPoints[i];
            right=right+cardPoints[ri];
            ri=ri-1;

            maxi=max(maxi,(left+right));

        }

        return maxi;
    }
};