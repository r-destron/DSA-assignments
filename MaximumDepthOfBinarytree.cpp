class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root)return 0;
        // return 1+max(maxDepth(root->left),maxDepth(root->right));
        queue<TreeNode*> q;
        int count=0;
        q.push(root);
        while(!q.empty()){
            int len=q.size();
            count++;
            for(int i=0;i<len;i++){
                TreeNode* node=q.front();q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
        }
        return count;
    }
};