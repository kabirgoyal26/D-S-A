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

    int  gethelp(TreeNode* root,int temp)
    {
        

        if(root==NULL)
        {
            return 0 ;
        }

        temp=(temp*10)+(root->val);

        if ( root->left==NULL &&  root->right==NULL)
        {
            return temp ;
        }

        int l=gethelp(root->left,temp);
        int r=gethelp(root->right,temp);

        return l+r;
    }
    int sumNumbers(TreeNode* root) {

        int temp =0;

        temp=gethelp(root,temp);

        return temp;
        
    }
};