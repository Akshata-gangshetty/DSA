//TC:O(n),SC:O(n)
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
    vector<int> preorderTraversal(TreeNode* root) {
      
        vector<int>postorder;
        if(root == NULL) return postorder;
        stack<TreeNode*>st;
        
       while (!st.empty())
       {
            if (root->left!=NULL)
            {
                st.push(root);
                root=root->left;
            }
            else
            {
                TreeNode* temp=root->right;
              if (temp==nullptr)
              {
                    st.pop();
                    while (!st.empty() && root==st.top()->right)
                    {
                    root=st.top();
                    st.pop();

                    }
                    

              }
              else
              {
                    root=temp;
              }
              

              
            }
            
       }
       
       
    }
};
