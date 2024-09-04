class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_set<long long> obstacleSet;  // Use long long for obstacle encoding
    // Encode obstacles in the set
    for (const auto& obs : obstacles) {
        int x = obs[0];
        int y = obs[1];
        obstacleSet.insert(static_cast<long long>(x) * 100000 + y); // Unique encoding for obstacle positions
    }

    // Direction vectors for North, East, South, and West
    vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int directionIndex = 0; // Start facing North
    int x = 0, y = 0; // Starting coordinates
    int maxDistanceSquared = 0;

    for (int command : commands) {
        if (command == -2) { // Turn left
            directionIndex = (directionIndex + 3) % 4;
        } else if (command == -1) { // Turn right
            directionIndex = (directionIndex + 1) % 4;
        } else { // Move forward k units
            for (int step = 0; step < command; ++step) {
                int newX = x + directions[directionIndex].first;
                int newY = y + directions[directionIndex].second;
                
                // Check if the next position is an obstacle
                if (obstacleSet.find(static_cast<long long>(newX) * 100000 + newY) == obstacleSet.end()) {
                    x = newX;
                    y = newY;
                    maxDistanceSquared = max(maxDistanceSquared, x * x + y * y);
                } else {
                    break; // Stop moving in this direction
                }
            }
        }
    }
    
    return maxDistanceSquared;
        
    }
};