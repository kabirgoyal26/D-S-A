class Solution {
public:
    string minWindow(string s, string t) {
         int l = 0;
        int r = 0;

        // min length declaration 
        int minlength = INT_MAX;
        int count = 0;

        int m = s.size();
        int n = t.size();

        // making a hash map for character frequencies
        map<char, int> mpp;

        int startingindex = -1;

        // populate the hash map with frequencies of characters in t
        for (int i = 0; i < n; i++) {
            mpp[t[i]]++;
        }

        while (r < m) {
            if (mpp[s[r]] > 0) {
                count++;
            }
            // ye to har element ke liye hoga 
            mpp[s[r]]--;

            while (count == n) {
                if (r - l + 1 < minlength) {
                    minlength = r - l + 1;
                    startingindex = l;
                }

                // reduce the window
                mpp[s[l]]++;

                if (mpp[s[l]] > 0) {
                    count--;
                }
                l++;
            }
            r++;
        }

        // Return the minimum window substring or an empty string if no valid window was found
        return (startingindex == -1) ? "" : s.substr(startingindex, minlength);
    }
};