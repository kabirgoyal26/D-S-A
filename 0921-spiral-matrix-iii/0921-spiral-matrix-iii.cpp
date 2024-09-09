class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rstart, int rcol) {

        // hame clockwise gumnaha toh directon dekh lo
        // directions east south west north 
        vector<vector<int>>direction={{0,1},{1,0},{0,-1},{-1,0}};


        int dir=0; // east 
        int steps=0;
        vector<vector<int>>ans;

        ans.push_back({rstart,rcol});

        // steps east or west me he change honge 

        while(ans.size()<rows*cols)
        {
            if(dir==0 || dir==2)
            {
                steps++;
            }

            for (int i=0 ;i<steps;i++)
            {
                rstart=rstart+direction[dir][0];
                rcol=rcol+direction[dir][1];

                if (rstart>=0 && rstart<rows && rcol>=0 && rcol<cols)
                {

                    ans.push_back({rstart,rcol});

                }
            }

            // formula to update direction 
            dir=(dir+1)%4;
        }
        return ans ;
    }
};