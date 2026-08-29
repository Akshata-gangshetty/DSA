
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
  bool PathSum(TreeNode* root, int targetSum) {
        if(root == NULL){
            return false;
        }
        if(root->left == NULL && root->right == NULL){
            return targetSum == root->val;
        }
        return PathSum(root->left,targetSum- root->val)||
        PathSum(root->right,targetSum- root->val);

        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
       
        return PathSum(root,targetSum);
    }
};