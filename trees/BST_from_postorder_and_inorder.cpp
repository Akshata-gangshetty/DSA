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
    TreeNode* buildTreeHelper( map<int,int>&mpp,vector<int>&inorder, int startind,int endind,vector<int>&postorder,int startpost,int endpost){
          if(startpost>endpost|| startind>endind) return NULL;
            TreeNode* root = new TreeNode(postorder[endpost]);
           int inroot=mpp[root->val];
            int numsleft=inroot-startind;
            
             root->left=buildTreeHelper(mpp,inorder,startind,inroot-1,postorder,startpost,startpost+numsleft-1);
             root->right=buildTreeHelper(mpp,inorder,inroot+1,endind,postorder,startpost+numsleft,endpost-1);

             return root;

    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int>mpp;
        for(int i=0;i<inorder.size();i++){
            mpp[inorder[i]]=i;

        }
        TreeNode* root= buildTreeHelper( mpp, inorder, 0, inorder.size()-1, postorder,0,postorder.size()-1);
        return root;
    }
};