class Solution {
public:

    bool is_valid(vector<vector<int>>matrix, int ii, int jj){
        if(ii+2>=matrix.size() || jj+2>=matrix[0].size()) return false;
        if(matrix[ii+1][jj+1]!=5) return false; 
        string traversal="";
        string org="2943816729438167";
        string revorg="761834927618349";
        traversal += to_string(matrix[ii][jj]); 
        traversal += to_string(matrix[ii][jj + 1]); 
        traversal += to_string(matrix[ii][jj + 2]); 
        traversal += to_string(matrix[ii + 1][jj + 2]);  
        traversal += to_string(matrix[ii + 2][jj + 2]);  
        traversal += to_string(matrix[ii + 2][jj + 1]); 
        traversal += to_string(matrix[ii + 2][jj]);  
        traversal += to_string(matrix[ii + 1][jj]);
        return (org.find(traversal) != string::npos || revorg.find(traversal) != string::npos);
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int cnt=0;
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(is_valid(grid,i,j)) cnt++;
            }
        }
        return cnt;
    }
};