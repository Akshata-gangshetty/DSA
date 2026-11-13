//TC:O(n X m)
//SC:O(n X m)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int  n=matrix.size();
       
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int j=0;j<n;j++){
            dp[n-1][j]=matrix[n-1][j];
        }
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<n;j++){
                int down=matrix[i][j]+dp[i+1][j];
                int left=matrix[i][j];
                if(j>0){
                    left+=dp[i+1][j-1];
                }
                else{
                    left+=1e9;
                }
                int right=matrix[i][j];
                if(j<n-1){
                    right+=dp[i+1][j+1];
                }
                else{
                    right+=1e9;
                }
                dp[i][j]=min(down,min(left,right));

            }
        }
        int ans=INT_MAX;
        for(int j=0;j<n;j++){
            ans=min(ans,dp[0][j]);
        }
        return ans;
    }
};