class Solution {
public:
    int isSafe(vector<vector<int>>&mat,int row,int col)
{
    int n=mat.size();

    for(int i=0;i<row;i++)
        if(mat[i][col]) return 0;

    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--)
        if(mat[i][j]) return 0;

    for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++)
        if(mat[i][j]) return 0;

    return 1;
}

void check(vector<vector<int>>&mat,vector<vector<int>>&res,int row)
{
    int n=mat.size();
    if(n==row)
    {
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j])
                    ans.push_back(j+1);
            }
        }
        res.push_back(ans);
        return;   
    }
    
    for(int col=0;col<n;col++)
    {
        if(isSafe(mat,row,col))
        {
            mat[row][col]=1;
            check(mat,res,row+1);
            mat[row][col]=0; 
        }
    }
}

vector<vector<int>> nqueen(int n)
{
    vector<vector<int>>mat(n,vector<int>(n,0));
    vector<vector<int>>res;
    check(mat,res,0);
    return res;
}

    int totalNQueens(int n) {
        vector<vector<int>>res=nqueen(n);
        return res.size();
    }
};