class Solution {
public:
    bool helper(TreeNode*l,TreeNode*r){
        if(!l && !r)return true;
        if(l && r)
        return (l->val==r->val) && helper(l->left,r->right) && helper(l->right,r->left);
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        return helper(root,root);
    }
};