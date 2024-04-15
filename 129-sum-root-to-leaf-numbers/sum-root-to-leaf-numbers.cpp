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
    int dfs(TreeNode* curr , int num){
        if (!curr) return 0;
        num = num*10 + curr->val;
        if (!curr->left && !curr->right){
            return num;
        }
        return dfs(curr->left , num) + dfs(curr->right , num);
    }
    int sumNumbers(TreeNode* root) {
        return dfs(root , 0);
    }
};