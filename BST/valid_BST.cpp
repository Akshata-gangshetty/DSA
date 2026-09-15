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
    bool validBST(TreeNode* root, long min_val, long max_val) {
        if (root == nullptr)
            return true;

        if (root->val <= min_val || root->val >= max_val)
            return false;

        return validBST(root->left, min_val, root->val) &&
               validBST(root->right, root->val, max_val);
    }

    bool isValidBST(TreeNode* root) {
        return validBST(root, LONG_MIN, LONG_MAX);
    }
};