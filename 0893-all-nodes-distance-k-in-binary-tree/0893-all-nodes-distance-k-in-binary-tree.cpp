/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    void marktree(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&track)
    {
        queue<TreeNode*>q;
        if (root==NULL)
        {
            return ;
        }

        q.push(root);

        while (!q.empty())
        {
            TreeNode*current=q.front();
            q.pop();
            if (current->left)
            {
                track[current->left]=current;
                q.push(current->left);
            }
            if (current->right)
            {
                track[current->right]=current;
                q.push(current->right);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {

        unordered_map<TreeNode*,TreeNode*>track;
        unordered_map<TreeNode*,bool>vis;
        vector<int>ans;
        queue<TreeNode*>q1;

        marktree(root,track);

        q1.push(target);
        vis[target]=true;
        int dis=0;

        while(!q1.empty())
        {
            int n=q1.size();

            if (dis == k)
            {
                break;
            }

            for (int i=0;i<n;i++)
            {

                TreeNode*current=q1.front();
                q1.pop();


                if(current->left && !vis[current->left]) {
                      q1.push(current->left);
                      vis[current->left] = true;
                     }
                if(current->right && !vis[current->right]) {
                      q1.push(current->right);
                   vis[current->right] = true;
                }
                if(track[current] && !vis[track[current]]) {
                         q1.push(track[current]);
                        vis[track[current]] = true;
                        }
            }
            dis++;

        }

        while (!q1.empty())
        {
            ans.push_back(q1.front()->val);
            q1.pop();
        }

        return ans ;


        
    }
};