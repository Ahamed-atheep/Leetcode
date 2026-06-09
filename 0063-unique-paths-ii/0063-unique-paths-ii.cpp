class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int r=obstacleGrid.size();
        int c=obstacleGrid[0].size();
        vector<vector<int>> sum(r,vector<int>(c,0));
        if(obstacleGrid[0][0]==1) return 0;
        sum[0][0]=1;
        for(int i=1;i<r;i++)
        {
            if(obstacleGrid[i][0]==0 && sum[i-1][0]==1)
                sum[i][0]=1;
        }
        for(int i=1;i<c;i++)
        {
            if(obstacleGrid[0][i]==0 && sum[0][i-1]==1)
            {
                sum[0][i]=1;
            }
        }
        for(int i=1;i<r;i++)
        {
            for(int j=1;j<c;j++)
            {
                if(obstacleGrid[i][j]==0)
                {
                    sum[i][j]=sum[i-1][j] + sum[i][j-1];
                }
            }
        }
        return sum[r-1][c-1];
    }
};