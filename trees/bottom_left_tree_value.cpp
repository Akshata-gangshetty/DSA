//TC:O(n) and SC:O(n)
//BFS level order traversal
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>q;
        int ans= root->val;
        q.push(root);
        
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                if(i==0){
                    ans=node->val;
                }
                if(node->left !=NULL){
                    q.push(node->left);
                }
                  if(node->right !=NULL){
                    q.push(node->right);
                }
            }
        }
        return ans;
        
    }
};
