#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int element=0;
        int nse=0;
        int pse=0;
        int maxarea=INT_MIN; 
        int n=heights.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                element=st.top();
                st.pop();
                nse=i;
                pse=st.empty()? -1:st.top();
                maxarea=max(heights[element]*(nse -pse -1),maxarea);
            }
            st.push(i);
        }
        while(!st.empty()){
            nse=n;
             element=st.top();
                st.pop();
                  pse=st.empty()? -1:st.top();
                maxarea=max(heights[element]*(nse -pse -1),maxarea);

        }
        return maxarea;
    }
};