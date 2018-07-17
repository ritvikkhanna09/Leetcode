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
        if(root==nullptr)
            return;
        util(root->left,arr);
        arr.push_back(root->val);
        util(root->right,arr);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> arr;
        util(root,arr);
        int min_val=INT_MAX;
        for(int i=1;i<arr.size();i++){
            min_val=min(min_val,abs(arr[i-1]-arr[i]));
        }
        return min_val;
    }
};