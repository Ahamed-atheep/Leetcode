class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<long long > row(n);
        vector<long long > col(m);
        long long total=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                total+=grid[i][j];
            }
        }
        for(int i=0;i<n;i++)
        { 
            long long sum=0;
            for(int j=0;j<m;j++) sum+=grid[i][j];
            row[i]=(i==0?sum:row[i-1]+sum);
        }
        for(int j=0;j<m;j++)
        {
            long long sum=0;
            for(int i=0;i<n;i++) sum+=grid[i][j];
            col[j]=(j==0?sum:col[j-1]+sum);
        }
        for(int r=0;r<n-1;r++)
        {
            if(2*row[r]==total) return 1;
        }
        for(int c=0;c<m-1;c++)
        {
            if(2*col[c]==total) return 1;
        }
        return 0;
    }
};