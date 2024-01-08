class Solution {
public:
    void repeat(TreeNode* root, int low, int high, int &res)
    {
        if(root==NULL) return;
        if(root->val <=high && root->val >=low)
        res = res + root->val;
        repeat(root->left,low,high,res);
        repeat(root->right,low,high,res);
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        
        int res = 0;
        repeat(root,low,high,res);
        return res;
    }
};
