class Solution {
public:
    int findindex(vector<int> row, int val)
    {
        for(int i=0;i<row.size();i++)
        {
            if(row[i]==val)
                return i;
        }
        return -1;
    }
    int colmax(vector<vector<int>>& matrix, int idx)
    {
        int ans = INT_MIN;
        for(int i=0;i<matrix.size();i++)
        {
            ans = max(ans,matrix[i][idx]);
        }
        return ans;
    }
    vector<int> luckyNumbers (vector<vector<int>>& matrix) 
    {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int r=0;
        int mini,maxi;
        while(r<m)
        {
            mini = *min_element(matrix[r].begin(),matrix[r].end());
            int index=findindex(matrix[r],mini);
            int maxx = colmax(matrix,index);
            if(maxx==mini)
                ans.push_back(maxx);
            r++;
        }
        return ans;
    }
};