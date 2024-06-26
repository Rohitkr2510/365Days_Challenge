class Solution {
public:
    void bfs(int i, int j, vector<vector<char>> &grid , vector<vector<int>> &vis)
    {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>> q;
        q.push({i,j});
        vis[i][j] = 1;
        

        while(!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            int drow[4] = {0,-1,0,+1};
            int dcol[4] = {-1,0,+1,0};

            for(int i =0;i<4;i++)
            {

            
                    int nrow = row + drow[i];
                    int ncol = col + dcol[i];

                    if(nrow>=0 && nrow<n && ncol >=0 && ncol<m && grid[nrow][ncol] == '1' && vis[nrow][ncol] == 0)
                    {
                        q.push({nrow,ncol});
                        vis[nrow][ncol] = 1;
                    }
            }

                


        }

    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m,0));

        int count = 0;

        for(int i =0;i<n;i++)
        {
            for(int j = 0;j<m ; j++)
            {
                if(grid[i][j] == '1' && vis[i][j] == 0)
                {
                    count++;
                    bfs(i,j,grid,vis);
                    cout<<"Hello";
                }
            }
        }

        return count;
        
    }
};