//TC:O(2n) and SC:O(n)
#include<bits/stdc++.h>
using namespace std;
class StockSpanner {
public:
    stack<pair<int,int>>st;
    int ind;
    int ans;
    StockSpanner() {
        ind=-1;
        
    }
    
    int next(int price) {
        ind=ind+1;
        
        while(!st.empty() && st.top().first <=price){
            st.pop();
          
        } int ans = st.empty() ? ind + 1 : ind - st.top().second;
           
         st.push({price,ind});
        return ans;
    }
};

