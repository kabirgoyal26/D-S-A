class Solution {
public:
    // making dfs
    void dfs(int sr,int sc,int initialcolour,int color,vector<vector<int>>&ans,vector<vector<int>>&image,int drow[],int dcol[])
    {
        ans[sr][sc]=color;
        int n=image.size();
        int m=image[0].size();

        // traversing in all 4 directions 
        for (int i=0;i<4;i++)
        {
            int nrow=sr+drow[i];
            int ncol=sc+dcol[i];


            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==initialcolour&& ans[nrow][ncol]!=color)
            {
                dfs(nrow,ncol,initialcolour,color,ans,image,drow,dcol);
            }

        }
    } 


    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        // storing initial colour 
        int initialcolour=image[sr][sc];

        //making ans matrix 
        vector<vector<int>>ans=image;

        // making drow and dcol for 4 direction traversal 
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};


        dfs(sr,sc,initialcolour,color,ans,image,drow,dcol);


        return ans ;

        
    }
};