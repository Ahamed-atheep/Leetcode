class Solution {
public:
    bool SpecialPosition(vector<vector<int>>& mat,int row,int col)
    {
        int n=mat.size();
        int m=mat[0].size();
        int ones=0;
        for(int i=0;i<n;i++)
        {
            if(mat[i][col]) ones++;
        }
        for(int i=0;i<m;i++)
        {
            if(mat[row][i]) ones++;
        }
        if(ones<=2) return 1;
        return 0;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j] && SpecialPosition(mat,i,j))
                {
                    count++;
                }
            }
        }
        return count;
    }
};