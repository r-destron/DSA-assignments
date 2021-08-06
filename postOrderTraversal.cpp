class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        if(!root) return v;
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            TreeNode* temp=s.top();
            s.pop();
            v.push_back(temp->val);
            if(temp->left) s.push(temp->left);
            if(temp->right) s.push(temp->right);
            
        }
        reverse(v.begin(),v.end());
        return v;
    }
};