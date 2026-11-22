//Time Complexity: O(n X m) 
//Space Complexity: O(m)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<int>prev(m+1,0);
        vector<int>cur(m+1,0);
        for(int j=0;j<=m;j++){
            prev[j]=j;
        }
        for(int i=1;i<=n;i++){
              cur[0]=i;
            for(int j=1;j<=m;j++){
                if(word1[i-1]==word2[j-1]){
                    cur[j]=prev[j-1];    
                }
                else{
                    int insert=cur[j-1];
                    int del=prev[j];
                    int replace=prev[j-1];
                    cur[j]=1+min({insert,del,replace});
                }


            }
            prev=cur;
        }
        return prev[m];
    }
};