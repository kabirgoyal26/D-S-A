class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        
        // Max heap to store characters by their lexicographical order
        priority_queue<pair<char, int>> maxHeap;
        for (auto& entry : freq) {
            maxHeap.push({entry.first, entry.second});
        }
        
        string result = "";
        
        while (!maxHeap.empty()) {
            auto [char1, count1] = maxHeap.top(); // Largest character
            maxHeap.pop();
            
            // Add char1 up to repeatLimit times
            int useCount = min(count1, repeatLimit);
            result.append(useCount, char1);
            count1 -= useCount;
            
            // If there are still remaining instances of char1
            if (count1 > 0) {
                if (maxHeap.empty()) break; // No other character to break the sequence
                
                // Get the next largest character
                auto [char2, count2] = maxHeap.top();
                maxHeap.pop();
                
                // Use char2 to break the sequence
                result.push_back(char2);
                count2--;
                
                // Push both characters back if they still have remaining frequency
                if (count2 > 0) maxHeap.push({char2, count2});
                maxHeap.push({char1, count1});
            }
        }
        
        return result;
    }
};