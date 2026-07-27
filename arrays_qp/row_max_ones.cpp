//TC:O(row*column) and SC:O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxones=0;
        int rowindex=0;
        for(int i=0;i<mat.size();i++){
            int cnt=0;
            for(int x:mat[i]){
                cnt+=x;
            }
            if(cnt>maxones){
                maxones=cnt;
                rowindex=i;
            }
        }
        return {rowindex,maxones};
    }
};
