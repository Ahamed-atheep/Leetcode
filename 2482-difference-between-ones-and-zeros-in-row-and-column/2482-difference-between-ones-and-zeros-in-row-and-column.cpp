class Solution {
public:
    
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>ans(n,vector<int>(m));
        vector<int>row(n),col(m);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j])
                {
                    row[i]++;
                    col[j]++;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans[i][j]=(2*row[i]-n)+(2*col[j]-m);
            }
        }
        return ans;
    }
};