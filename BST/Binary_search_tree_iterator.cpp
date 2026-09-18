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
class BSTIterator {
public:
    stack<TreeNode*>mystack;
    void pushAll(TreeNode* root){
        while(root){
            mystack.push(root);
            root=root->left;
        }
    }
    BSTIterator(TreeNode* root) {
        pushAll(root);
    }
    
    int next() {
        TreeNode*tmpnode=mystack.top();

        mystack.pop();
        pushAll(tmpnode->right);
        return tmpnode->val;
    }
    
    bool hasNext() {
        return !mystack.empty();
    }
};