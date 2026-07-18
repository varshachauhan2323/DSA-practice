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
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        if(!root->left&&!root->right) return 1;
        int lh=0;
        int rh=0;
        if(root->left){
         lh=minDepth(root->left);}
        if(root->right){
         rh=minDepth(root->right);
                }
        if(!root->left&&root->right) return 1+max(lh,rh);
        if(!root->right&&root->left) return 1+max(lh,rh);
         return 1+min(lh,rh);
    }
};