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
    int widthOfBinaryTree(TreeNode* root) {

        queue<pair<TreeNode*,int>>q;
        int ans =0;

        if (root==NULL)
        {
            return ans ;
        }

        q.push({root,0});

        while (!q.empty())
        {
            int s=q.size();
            int m=q.front().second;
            int first;
            int last;


            for (int i=0;i<s;i++)
            {
                TreeNode* temp=q.front().first;
                long long  curr=q.front().second - m;

                q.pop();

                if (i==0)
                {
                    first=curr;
                }
                if (i==s-1)
                {
                    last=curr;
                }

                if (temp->left)
                {
                    q.push({temp->left,curr*2+1});
                }
                if (temp->right)
                {
                    q.push({temp->right,curr*2+2});
                }

            }


            ans = max(ans, last - first + 1);

        }
        return ans ;
    }
};