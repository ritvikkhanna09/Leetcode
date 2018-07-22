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
    void util(TreeNode* root,vector<int> &arr){
        if(root->left==nullptr && root->right==nullptr)
            arr.push_back(root->val);
        if(root->left!=nullptr)
            util(root->left,arr);
        if(root->right!=nullptr) util(root->right,arr);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(root1==nullptr||root2==nullptr)
            return false;
        vector<int> arr1;
        util(root1,arr1);
        vector<int> arr2;
        util(root2,arr2);
        if(arr1.size()==arr2.size()){
            for(int i=0;i<arr1.size();i++){
                if(arr1[i]!=arr2[i])
                    return false;
            }
            return true;
        }
        return false;
    }
};