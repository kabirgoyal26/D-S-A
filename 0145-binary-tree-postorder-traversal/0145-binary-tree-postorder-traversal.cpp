/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
// using recurssion and stack s bhi ho jayega 
    void postorder(TreeNode* root, vector<int>&ans)
    {
        if(root==NULL)
        {
            return ;
        }
        // for preorder 
        //ans.push_back(root->val);
        postorder( root->left, ans);
        //for inorder 
        //ans.push_back(root->val);
        postorder( root->right, ans);
        ans.push_back(root->val);
    }


    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        postorder(root,ans);
        return ans ;
        

        return ans ;
        
    }
};