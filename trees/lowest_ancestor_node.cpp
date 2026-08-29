

#include<bits/stdc++.h>
using namespace std;
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
class Solution {
public:
     TreeNode* CommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root==nullptr || root==p || root==q){
            return root;
        }
        TreeNode* lh=CommonAncestor(root->left,p,q);
          TreeNode* rh=CommonAncestor(root->right,p,q);
          if(lh && rh){
            return root;
          }
          return lh ? lh:rh;



        
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return CommonAncestor(root,p,q);
        
    }
};