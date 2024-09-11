class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {

        int result =0;
        vector<int>onerow(mat.size(),0);
        vector<int>onecol(mat[0].size(),0);


        for(int i=0;i<mat.size();i++)
        {
            for (int j=0;j<mat[0].size();j++)
            {
                if (mat[i][j]==1)
                {
                    onerow[i]++;
                    onecol[j]++;
 
                }
            }
        }

        for(int i=0;i<mat.size();i++)
        {
            for (int j=0;j<mat[0].size();j++)
            {
                if (mat[i][j]==1 && onerow[i]==1 && onecol[j]==1)
                {
                    result++;
 
                }
            }
        }


        return result ;
    }
};