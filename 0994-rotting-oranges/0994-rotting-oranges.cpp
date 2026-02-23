class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>pq;
        int n=grid.size(),m=grid[0].size();
        int fresh=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    pq.push({i,j});
                }
                else if(grid[i][j]==1) fresh++;
            }
        }
        if(fresh==0) return 0;
        vector<vector<int>>directions={{1,0},{0,1},{-1,0},{0,-1}};
        int count=-1;
        while(!pq.empty())
        {
            count++;
            int k=pq.size();
            for(int i=0;i<k;i++){
            int row=pq.front().first;
            int col=pq.front().second;
            pq.pop();
            for(int j=0;j<4;j++)
            {
                int r=directions[j][0]+row;
                int c=directions[j][1]+col;
                if((r>=0 && r<n ) &&  (c>=0 && c<m))
                {
                    if(grid[r][c]==1)
                    {
                        grid[r][c]=2;
                        fresh--;
                        pq.push({r,c});
                    }
                }
            }
           
            }
        }
        return fresh==0?count:-1;
    }
};