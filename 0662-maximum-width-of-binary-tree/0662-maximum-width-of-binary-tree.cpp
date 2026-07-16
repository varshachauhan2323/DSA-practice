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
    int widthOfBinaryTree(TreeNode* root) {
        int ans=0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            int minind=q.front().second;
            int n=q.size();
            int first,last;
            for(int i=0;i<n;i++){
                int currind=q.front().second-minind;

                TreeNode *node=q.front().first;
                q.pop();
                if(i==0)  first=currind;
                if(i==n-1)  last=currind;
                if(node->left){
                    q.push({node->left,2*1ll*currind+1});
                }
                if(node->right){
                    q.push({node->right,2*1ll*currind+2});
                }

                
            }
            ans=max(ans,last-first+1);
        }
        return ans;
    }
};