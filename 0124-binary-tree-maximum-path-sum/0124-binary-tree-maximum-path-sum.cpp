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
    int check(TreeNode * node,int &maxi){
        if(node==NULL) return 0;
        int lm=max(0,check(node->left,maxi));
        int rm=max(0,check(node->right,maxi));
        maxi=max(node->val+lm+rm,maxi);
        return node->val+max(lm,rm);

    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        check(root,maxi);
        return maxi;
    }
};