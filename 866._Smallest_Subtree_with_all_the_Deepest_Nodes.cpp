/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int depth(TreeNode *root) {
        if(root==nullptr)
            return 0;
        int l=depth(root->left);
        int r=depth(root->right);
        return max(l,r)+1;
    }

    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        int d = depth(root->left) - depth(root->right);
        if(d==0){
            return root;
        }
        else if(d>0)
            return subtreeWithAllDeepest(root->left);
        return subtreeWithAllDeepest(root->right);
    }
};