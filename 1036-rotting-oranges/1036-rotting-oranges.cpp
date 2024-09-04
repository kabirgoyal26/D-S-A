class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        //declaring max time 
        int ans =0;

        int n=grid.size();
        int m=grid[0].size();

        // making visited vector 
        vector<vector<int>> vis(n, vector<int>(m, 0));


        // making queue as {{r,c},t}
        queue<pair<pair<int,int>,int>>q;
        // fresh count 
        int freshcount=0;

        for(int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    //marking in visited vector 
                    vis[i][j]=2;

                    // pushing in queue in 0 time 
                    q.push({{i,j},0});
                }
                else if(grid[i][j]==1)
                {

                    freshcount++;

                }
                else 
                {
                    vis[i][j]=0;
                }
            }
        }


        // making direction to travese 
        int time=0;
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        // count of orange conversions 
        int count =0;


        //queue me chale jao 
        while (!q.empty())
        {
            //extract row col time 
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            q.pop();

           


            // update the time 
            ans=max(t,ans);

            //travesinf all 4 directions 

            for (int k=0;k<4;k++)
            {
                int nrow=r+drow[k];
                int ncol=c+dcol[k];

                if (nrow>=0 && nrow<n && ncol>=0 && ncol<m && /*frsh hona chaiye */grid[nrow][ncol]==1 &&vis[nrow][ncol]==0)
                {
                    //agr ye ha to q me push kardo and time bad do and vis ko update bhi kardo
                    q.push({{nrow,ncol},t+1});
                    vis[nrow][ncol]=2;
                    count ++;

                }
            }

        }

        if (count != freshcount)
        {
            return -1;
        }

        return ans ;
        
    }
};