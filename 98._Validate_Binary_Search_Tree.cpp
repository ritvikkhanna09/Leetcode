class Solution {
public:
    bool isValidBST(TreeNode* root) {
        static struct TreeNode *prev = nullptr;
        if (root){
            if (!isValidBST(root->left))
              return false; 
            if (prev != nullptr && root->val <= prev->val)
              return false;
            prev = root;
            return isValidBST(root->right);
        }
        return true;
    }
};
