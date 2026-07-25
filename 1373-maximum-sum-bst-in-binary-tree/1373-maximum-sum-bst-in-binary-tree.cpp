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
class NodeValue{
    public:
    int maxnode;
    int minnode;
    int maxval;
    NodeValue(int maxnode,int minnode,int maxval){
        this->maxnode=maxnode;
        this->minnode=minnode;
        this->maxval=maxval;
    }
    
} ;
class Solution {
public:
int ans=0;
NodeValue find(TreeNode * root){
        if(!root) return NodeValue(INT_MIN,INT_MAX,0);
        auto left=find(root->left);
        auto right=find(root->right);
        if(left.maxnode<root->val&&root->val<right.minnode){
            ans=max(ans,root->val+left.maxval+right.maxval);
            return NodeValue(max(right.maxnode,root->val),min(left.minnode,root->val),root->val+left.maxval+right.maxval);
        }

            return NodeValue(INT_MAX,INT_MIN,0);}

    int maxSumBST(TreeNode* root) {
        find(root);
        return ans;
        
    }
};