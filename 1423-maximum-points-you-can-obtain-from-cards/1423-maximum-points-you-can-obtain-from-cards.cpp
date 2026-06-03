class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total=0;
        int n=cardPoints.size();
        for(int i=0;i<k;i++) total+=cardPoints[i];
        int best=total;
        for(int i=0;i<k;i++)
        {
            total-=cardPoints[k-i-1];
            total+=cardPoints[n-i-1];
            best=max(best,total);
        }
        return best;
    }
};