class NumMatrix {
public:
    vector<vector<int>>prefix;
    NumMatrix(vector<vector<int>>& matrix) {
        prefix.resize(matrix.size()+1,vector<int>(matrix[0].size()));
        for(int i=0;i<matrix[0].size();i++)
        {
            for(int j=0;j<matrix.size();j++)
            {
                prefix[j+1][i]=prefix[j][i]+matrix[j][i];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        for(int i=col1;i<=col2;i++)
        {
            sum+=(prefix[row2+1][i] - prefix[row1][i]);
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */