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
    TreeNode* markparents(TreeNode* root,int start,unordered_map<TreeNode*,TreeNode*>&parents){
        queue<TreeNode*>q;
        q.push(root);
        TreeNode  * res=root;
        while(!q.empty()){
            TreeNode*node=q.front();
            q.pop();
            if(node->val==start) res=node;
            if(node->left){
                parents[node->left]=node;
                q.push(node->left);
            }
            if(node->right){
                parents[node->right]=node;
                q.push(node->right);
            }

        }
        return res;
    }
    int findmaxdistance(TreeNode* root,unordered_map<TreeNode *,TreeNode *>&parents){
        if(!root) return 0;
        queue<TreeNode*>q;
        q.push(root);
        int maxi=0;
        unordered_map<TreeNode*,int>vis;
        vis[root]=1;
        while(!q.empty()){
            int fl=0;
            int n=q.size();
            for(int i=0;i<n;i++){
                 TreeNode* node=q.front();
                 q.pop();
                if(node->left&&!vis[node->left]){
                    fl=1;
                    q.push(node->left);
                    vis[node->left]=1;

                }
                 if(node->right&&!vis[node->right]){
                    fl=1;
                    q.push(node->right);
                    vis[node->right]=1;

                }
                 if(parents[node]&&!vis[parents[node]]){
                    fl=1;
                    q.push(parents[node]);
                    vis[parents[node]]=1;

                }
            }
            if(fl) maxi++;

        
    }    return maxi;
}
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<TreeNode *,TreeNode *>parents;
        TreeNode *target=markparents(root,start,parents);
        int maxi=findmaxdistance(target,parents);
        return maxi;
    }
};