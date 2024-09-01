class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (m * n != original.size()) return {};
        
        vector<vector<int>> grid(m, vector<int>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                // get linear index
                int linearIndex = i * n + j;
                grid[i][j] = original[linearIndex];
            }
        }
        
        return grid;
    }
};