class Solution {
public:
    int sum=0;
    void helper(TreeNode* root,int val){
        if(!root->left && !root->right){
            sum+=val;
            return;
        }
        if(root->left) helper(root->left,val*10+root->left->val);
        if(root->right) helper(root->right,val*10+root->right->val);
    }
    int sumNumbers(TreeNode* root) {
        helper(root,root->val);
        return sum;
    }
};