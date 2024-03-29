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
    int pseudoPalindromicPaths (TreeNode* root) {
        int ans =0;
        int count =0;
        vector<int> f (10,0);
        
        function<void (TreeNode*, bool)> dfs =[&](TreeNode* node,bool need){
            if(!node) return;
            int val = node->val;

            f[val] ^= 1;
            if (f[val]){
                ++count;
            }
            else{
                --count;
            }

            if(!(node -> left) &&  !(node -> right)){
                ans += count == need;
            }

            dfs(node->left,need ^1);
            dfs(node->right,need ^1);

            f[val] ^= 1;

            if (f[val]){
                ++count;
            }
            else{
                --count;
            }
        };

        dfs(root ,1);
        return ans;
        
    }
};