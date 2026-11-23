//TC:O(n X m)
//SC:O(m)
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isMatch(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<int>prev(m+1);
        vector<int>cur(m+1);
        prev[0]=1;
        for(int j=1;j<=m;j++){
            if(p[j-1]=='*'){
                prev[j]=prev[j-1];
            }
        }
        for(int i=1;i<=n;i++){
            cur[0]=0;
            for(int j=1;j<=m;j++){
                if(s[i-1]==p[j-1]|| p[j-1]=='?'){
                    cur[j]=prev[j-1];
                }
                else if(p[j-1]=='*'){
                    cur[j]=cur[j-1] || prev[j];
                }
                else{
                    cur[j]=0;
                }
            }
            prev=cur;
        }
        return prev[m];

    }
};