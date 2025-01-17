class Solution {
public:
    int findmaxpathsum(TreeNode* root1, int &ans) {
        // Base case: If the node is null, return 0.
        if (root1 == nullptr) {
            return 0;
        }

        // Recursively get the maximum path sum of the left and right subtrees.
        int lh_sum = max(0, findmaxpathsum(root1->left, ans));  // Ignore negative sums
        int rh_sum = max(0, findmaxpathsum(root1->right, ans)); // Ignore negative sums

        // Update the answer with the maximum path sum passing through this node.
        ans = max(ans, root1->val + lh_sum + rh_sum);

        // Return the maximum sum for the current node's path, either left or right.
        return root1->val + max(lh_sum, rh_sum);
    }

    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;  // Initialize to the smallest integer to handle negative sums
        findmaxpathsum(root, ans);
        return ans;
    }
};
