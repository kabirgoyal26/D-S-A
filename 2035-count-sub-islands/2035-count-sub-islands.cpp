class Solution {
public:

     // checking in grid 1 that coints a island 
    bool  checkingrid1(vector<vector<int>>& grid1, vector<vector<int>>& grid2,int i,int j)
    {
        if(i < 0 || i >= grid1.size() || j < 0 || j >= grid1[0].size()) {
            return true;
        }

        if(grid2[i][j]!=1)
        {
            return true ;
        }

        // visit mark kar raha hu 
         grid2[i][j]= -1;


        bool result=(grid1[i][j] == 1);

        // dfs laga rha hu 

        result = result & checkingrid1(grid1,grid2,i+1,j);
        result = result & checkingrid1(grid1,grid2,i-1,j);
        result = result & checkingrid1(grid1,grid2,i,j+1);
        result = result & checkingrid1(grid1,grid2,i,j-1);

        return result ;
    }

    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        //size of grids 
        int m=grid1.size();
        int n= grid1[0].size();

        int count=0;

        // iterarting into matrix 

        for(int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {

                // checking iskland match and size 

                if(grid2[i][j]==1 && checkingrid1(grid1,grid2,i,j))
                {
                    count++;

                }

            }
        }

        return count;
        
    }
};