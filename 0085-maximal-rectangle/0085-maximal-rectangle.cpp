class Solution {
public:
    vector<int> findnse(vector<int>& array) {
        stack<int> st;
        int n = array.size();
        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && array[st.top()] >= array[i]) {
                st.pop();
            }
            ans[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> findpse(vector<int>& array) {
        stack<int> st;
        int n = array.size();
        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            while (!st.empty() && array[st.top()] >= array[i]) {
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int maxArea = 0;

        vector<int> nse = findnse(heights);
        vector<int> pse = findpse(heights);

        for (int i = 0; i < n; i++) {
            int length = heights[i];
            int breadth = (nse[i] - pse[i] - 1);
            int area = length * breadth;
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
       

        int n = matrix.size();    // rows
        int m = matrix[0].size(); // columns
        int maximumArea = 0;

        
        vector<int> heights(m, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
               
                heights[j] = (matrix[i][j] == '1') ? heights[j] + 1 : 0;
            }
            
            maximumArea = max(maximumArea, largestRectangleArea(heights));
        }

        return maximumArea;
    }
};
