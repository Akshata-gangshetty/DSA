//Tc: O(n)+O(n)=O(2n)=O(n)
//sc:O(n)
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
    vector<int> inorderTraversal(TreeNode* root) {
      
        stack<TreeNode*>st;
        vector<int>ans;
        TreeNode* node=root;
        while(node !=nullptr || !st.empty()){
          while(node !=nullptr){
            st.push(node);
             node=node->left;
            
          }
          node=st.top();
          st.pop();
          ans.push_back(node->val);
          node =node->right;
            
        }
        return ans;
       
    }
};
