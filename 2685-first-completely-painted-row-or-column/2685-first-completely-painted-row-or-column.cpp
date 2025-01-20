class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        // Create a map to store the positions of each number in mat
        unordered_map<int, pair<int, int>> valuePos;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                valuePos[mat[i][j]] = {i, j};
            }
        }

        
        vector<int> rowCount(m, 0), colCount(n, 0);
       // int totalRows = 0, totalCols = 0;

        
        for (int k = 0; k < arr.size(); ++k) {
            int num = arr[k];
            auto [i, j] = valuePos[num];
            rowCount[i]++;  
            colCount[j]++;  

            
            // if (++rowCount[i] == n) {
            //     totalRows++;
            // }
            // if (++colCount[j] == m) {
            //     totalCols++;
            // }

            
            // if (totalRows > 0 || totalCols > 0) {
            //     return k;
            // }
            if (rowCount[i] == n || colCount[j] == m)
            {
                return k;
            }
        }
          

        return -1; 
        
    }
};