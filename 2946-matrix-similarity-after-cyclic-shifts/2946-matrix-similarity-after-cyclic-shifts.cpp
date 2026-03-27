class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();
        int r=k%m;
        int shifted;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++){
            if(i&1)
            {
                shifted=(j+r)%m;
            }
            else shifted=(j-r+m)%m;
            if(mat[i][shifted]!=mat[i][j]) return 0;
            }
        }

        return 1;
    }
};