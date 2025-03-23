class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        int a = intervals[0][0];
        int b = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            if (b >= intervals[i][0]) {
                b = max(b, intervals[i][1]);
            } else {
                ans.push_back({a, b});
                a = intervals[i][0];
                b = intervals[i][1];
            }
        }

        ans.push_back({a, b});
        
        return ans;
    }
};
