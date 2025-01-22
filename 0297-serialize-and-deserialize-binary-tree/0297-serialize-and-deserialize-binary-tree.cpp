/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {

        string s="";
        queue<TreeNode*>q;

        q.push(root);

        while(!q.empty())
        {
            TreeNode*current=q.front();
            q.pop();

            if (current==NULL)
            {
                s=s+"#," ;
            }
            else 
            {
                s=s+to_string(current->val)+",";
                 q.push(current->left);
                q.push(current->right);
            }

            
            
               
            
        }

        return s;
        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {

        if (data == "#,") return NULL;

        stringstream s(data);
        string str;

        getline (s,str,',');

        TreeNode* root=new TreeNode(stoi(str));

        queue<TreeNode*>q;

        q.push(root);

        while (!q.empty())
        {
            TreeNode*current=q.front();
            q.pop();
            getline (s,str,',');
            if (str!="#")
            {
                TreeNode* leftnode=new TreeNode(stoi(str));
                current->left=leftnode;
                q.push(leftnode);

            }
            getline (s,str,',');

            if (str!="#")
            {
                TreeNode* rightnode=new TreeNode(stoi(str));
                current->right=rightnode;
                q.push(rightnode);

            }

        }

        

        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));