class Solution {
public:
 //destination city return karnui ha 

    string destCity(vector<vector<string>>& paths) {

        int n=paths.size();
        

        unordered_map<string,int>mpp;

        for(int i=0;i<n;i++)
        {

            mpp[paths[i][0]]++;

        }


        for (int j=0;j<n;j++)
        {
            if(mpp.find(paths[j][1])==mpp.end())
            {
                return paths[j][1];
            }
        }
        return "";
    }
};