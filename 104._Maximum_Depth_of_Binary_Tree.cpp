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
    int maxDepth(TreeNode* root) {
        if (root==NULL) 
            return 0;
        else{
           int lDepth = maxDepth(root->left);
           int rDepth = maxDepth(root->right);
            
           if (lDepth > rDepth) 
               return(lDepth+1);
           else return(rDepth+1);
        }
    }
};