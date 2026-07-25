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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        TreeNode *curr=root;
        if(depth==1){
            TreeNode *newroot=new TreeNode(val);
            newroot->left=root;
            return newroot;
        }
        queue<pair<TreeNode*,int>>st;
        st.push({root,1});
        while(!st.empty()){
            TreeNode *node=st.front().first;
            int d=st.front().second;
            st.pop();
            if(d==depth-1){
                TreeNode *nodeleft=node->left;
                TreeNode *noderight=node->right;
                TreeNode *newleft=new TreeNode(val);
                TreeNode *newright=new TreeNode(val);
                newleft->left=nodeleft;
                newright->right=noderight;
                node->left=newleft;
                node->right=newright;

            }
            else{
            if(node->left){
                st.push({node->left,d+1});
            }
             if(node->right){
                st.push({node->right,d+1});
            }
        }}
        return root;
    }
};