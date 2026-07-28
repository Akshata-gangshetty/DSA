//TC:O(log(m*n))
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int low=0;long long high(n*m -1);
        while(low<=high){
           long long mid=(low+high)/2;
            
            int val=matrix[mid/n][mid%n];
            if(val==target) return true;
            else if(val<=target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
        
    }
};
