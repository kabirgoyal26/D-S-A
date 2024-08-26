/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void postorder(Node* root,vector<int > &ans)
    {
        if(root == NULL)
        {
            return;
        }
       // postorder(root->left,ans);
       // postorder(root->left,ans);

       // hame childrens given ha 
       for(auto i : root->children)
       {
        postorder(i,ans);
       }
        ans.push_back(root->val);

    }
    vector<int> postorder(Node* root) {
        vector<int >ans;
        postorder(root,ans);
        return ans ;
        
    }
};