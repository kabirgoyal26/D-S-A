class Solution {
public:
    string reverseWords(string s) {
        
     stringstream ss(s);
    vector<string> words;
    string word;
    
    // Split the string into words
    while (ss >> word) {
        words.push_back(word);
    }
    
    // Reverse the words vector
    string result = "";
    for (int i = words.size() - 1; i >= 0; --i) {
        result += words[i];
        if (i != 0) {
            result += " ";  // Add space between words
        }
    }
    
    return result;
    }
};