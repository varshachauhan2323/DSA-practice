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
    void markparents(TreeNode * root,unordered_map<TreeNode *,TreeNode*>&parent_track){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode * curr=q.front();
            q.pop();
            if(curr->left){
                parent_track[curr->left]=curr;
                q.push(curr->left);

            }
            if(curr->right){
                parent_track[curr->right]=curr;
                q.push(curr->right);

            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*>parent_track;
        markparents(root,parent_track);
        unordered_map<TreeNode*,bool>vis;
        queue<TreeNode*>q;
        q.push(target);
        vis[target]=true;
        int currlevel=0;
        while(!q.empty()){
            int n=q.size();
            if(currlevel==k) break;
            currlevel++;
            for(int i=0;i<n;i++){
                TreeNode *node=q.front();
                q.pop();
                if(node->left&&!vis[node->left]){
                    q.push(node->left);
                    vis[node->left]=true;
                }
                 if(node->right&&!vis[node->right]){
                    q.push(node->right);
                    vis[node->right]=true;
                }
                if(parent_track[node]&&!vis[parent_track[node]]){
                    q.push(parent_track[node]);
                    vis[parent_track[node]]=true;
                }
            }
        }
        vector<int>ans;
        while(!q.empty()){
            ans.push_back(q.front()->val);
                q.pop();
        }
        return ans;
    }
};