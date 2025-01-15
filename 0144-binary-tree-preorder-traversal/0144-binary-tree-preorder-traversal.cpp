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

//    void preorderTraversal1(TreeNode* root,vector<int>&ans)
//    {
//     if (root==NULL)
//     {
//         return ;
//     }
    
//     ans.push_back(root->val);
//     preorderTraversal1(root->left,ans);
//     preorderTraversal1(root->right,ans);
    

    


//    }
 
    
    vector<int> preorderTraversal(TreeNode* root) {

//         vector<int>ans ;
//         preorderTraversal1(root,ans);
//         return ans ;

       stack<TreeNode*>st;
        st.push(root);
        vector<int>ans;

        if (root==NULL)
        {
            return ans ;
        }

        while(!st.empty())
        {
            root=st.top();
            ans.push_back(root->val);
            st.pop();
            if(root->right)st.push(root->right);
            if(root->left)st.push(root->left);
            
            

        }
        return ans ;

    }
};