//TC:O(m+n) SC:O(n)
#include<bits/stdc++.h>
using namespace std;
 class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size()-1;
        int m=nums1.size()-1;
        
        unordered_map<int,int>nge;
        stack<int>st;
        
            for(int i=n;i>=0;--i){
                int num=nums2[i];
            while(!st.empty() &&  st.top()<=num){
                st.pop();
            }
            if(st.empty()) nge[num]=-1;
            else{
                nge[num]=st.top();
            }
            st.push(num);
        }
        vector<int>res(nums1.size());
        for(int i=0;i<m;++i){
            res[i]=nge[nums1[i]];
        }
        return res;
        

    }
};
