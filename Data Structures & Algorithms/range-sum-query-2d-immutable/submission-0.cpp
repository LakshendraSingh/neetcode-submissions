class NumMatrix {
private:
    vector <vector<int>> mat;
    vector<vector<int>> prefix_sum;
    int rs_mat=0, cs_mat=0; 
public:    
    NumMatrix(vector<vector<int>>& matrix) {
        mat=matrix;
        rs_mat=mat.size();
        cs_mat=mat[0].size();
        prefix_sum=vector<vector<int>>(rs_mat+1,vector<int>(cs_mat+1,0));

        for(auto i=1;i<=rs_mat;i++){
            for(auto j=1;j<=cs_mat;j++){
                prefix_sum[i][j]=mat[i-1][j-1]
                                +prefix_sum[i-1][j]
                                +prefix_sum[i][j-1]
                                -prefix_sum[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=prefix_sum[row2+1][col2+1]
                -prefix_sum[row2+1][col1]
                -prefix_sum[row1][col2+1]
                +prefix_sum[row1][col1];
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */