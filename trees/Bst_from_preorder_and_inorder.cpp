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

  TreeNode* buildTreeHelper( map<int, int>& ismap, vector<int>& preorder, int startpre, int endpre, vector<int>& inorder, int startind, int endind ){
            if(startpre>endpre || startind>endind) return NULL;
            TreeNode* root =new TreeNode(preorder[startpre]);
            int inroot=ismap[root->val];
            int numsleft=inroot-startind;
            root->left=buildTreeHelper(ismap,preorder,startpre+1,startpre+numsleft,inorder,startind,inroot-1);
             root->right=buildTreeHelper(ismap,preorder,startpre+numsleft+1,endpre,inorder,inroot+1,endind);
             return root;

        }
        
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
         map<int,int>ismap;
        for(int i=0;i<inorder.size();i++){
           ismap[inorder[i]]=i;
        }
        TreeNode* root =buildTreeHelper(ismap,preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);
        return root;
      
    };
};