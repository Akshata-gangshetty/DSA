//TC:O(n) and SC:O(n) 
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
    int findmax(TreeNode* root,int &maxi){
    if(!root) return 0;
        int lh=findmax(root->left,maxi);
        int rh=findmax(root->right,maxi);
        maxi=max(maxi,lh+rh);//height of tree
        return 1+max(lh,rh);//Diameter of tree
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
      int len= findmax(root,maxi);
      return maxi;
    }
};
