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
    TreeNode* minNode(TreeNode* root){
        TreeNode* curr=root;
        while(curr->left!=nullptr) curr=curr->left;
        return curr;
    }
    
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr) return nullptr;
        if(key<root->val) 
            root->left=deleteNode(root->left,key);
        else if(key>root->val) 
            root->right=deleteNode(root->right,key);
        else{
            if(root->left==nullptr){
                TreeNode* temp=root->right;
                delete root;
                return temp;
            }else if(root->right==nullptr){
                TreeNode* temp=root->left;
                delete root;
                return temp;
            }
            TreeNode* temp=minNode(root->right);
            root->val=temp->val;
            root->right=deleteNode(root->right,temp->val);
        }
        return root;
    }
};