class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

    vector<int> sortedArr = arr;
    
    // Sort the copy of the array
    sort(sortedArr.begin(), sortedArr.end());
    
    // Create a map to assign ranks to each unique element
    unordered_map<int, int> rankMap;
    int rank = 1;
    
    // Iterate over the sorted array and assign ranks
    for (int num : sortedArr) {
        if (rankMap.find(num) == rankMap.end()) {
            // If the number hasn't been assigned a rank, assign it the current rank
            rankMap[num] = rank++;
        }
    }
    
    // Replace each element in the original array with its rank
    for (int i = 0; i < arr.size(); ++i) {
        arr[i] = rankMap[arr[i]];
    }
    
    return arr;
}

};