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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        int flag=0;

        if (root==NULL)
        {
            return ans ;
        }

        queue<TreeNode*>q;
        q.push(root);

        while (!q.empty())
        {
            int n=q.size();

            vector<int>result;

            for (int i=0;i<n;i++)
            {
                TreeNode*temp=q.front();
                q.pop();
                result.push_back(temp->val);

                if (temp->left!=NULL)
                {
                    q.push(temp->left);
                }
                if (temp->right!=NULL)
                {
                    q.push(temp->right);
                }
            }

            if (flag==0)
            {
                ans.push_back(result);
                flag=2;
            }
            else
            {
                reverse(result.begin(),result.end());
                ans.push_back(result);
                flag=0;
            }
        }
        return ans ;
    }
};