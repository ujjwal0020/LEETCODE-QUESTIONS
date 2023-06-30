class Solution
 {
public:
    int deleteGreatestValue(vector<vector<int>>& grid)
    {
        for(int i=0;i<grid.size();i++)
        {
            sort(grid[i].begin(), grid[i].end());
        }
        int t=0;
        for(int i=0;i<grid[0].size();i++)
        {
            int count = 0;
            for(int j=0;j<grid.size();j++)
            {
                count= max(count,grid[j][i]);
            }
            t=t+count;
        }
        return t;
    }
};
