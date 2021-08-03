class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        if(!root)return v;
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            TreeNode *temp = s.top();
            v.push_back(temp->val);
            s.pop();
             if(temp->right){
                s.push(temp->right);
            }
            if(temp->left){
                s.push(temp->left);
            }
        }
        return v;
    }
};