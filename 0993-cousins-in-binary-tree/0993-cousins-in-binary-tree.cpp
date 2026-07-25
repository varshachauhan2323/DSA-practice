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
    bool isCousins(TreeNode* root, int x, int y) {
        unordered_map<int,pair<int,int>>mpp;
        stack<pair<TreeNode*,int>>st;
        st.push({root,0});
        mpp[root->val]={0,root->val};
    
        while(!st.empty()){
            TreeNode *front=st.top().first;
            int depth=st.top().second;
            st.pop();
            if(front->left){
                st.push({front->left,depth+1});
                mpp[front->left->val]={depth+1,front->val};
            }
            if(front->right){
                st.push({front->right,depth+1});
                mpp[front->right->val]={depth+1,front->val};
            }
        }
        return mpp[x].first==mpp[y].first &&mpp[x].second!=mpp[y].second;
    }
};