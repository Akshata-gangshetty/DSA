//TC:O(N X amount)
//SC:O(amount)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int>prev(amount+1,1e9);
        vector<int>cur(amount+1,1e9);
        for(int i=0;i<=amount;i++){
             if(i%coins[0]==0) prev[i]= i/coins[0];
        }
       
        for(int i=1;i<coins.size();i++){
            for(int j=0;j<=amount;j++){
                int nottake=0+prev[j];
                int take=INT_MAX;
                if(coins[i]<=j){
                    take=1+cur[j-coins[i]];
                }
                cur[j]=min(take,nottake);

            }
            prev=cur;
        }
        if(prev[amount]>=1e9) return -1;
        return prev[amount];
    }
};