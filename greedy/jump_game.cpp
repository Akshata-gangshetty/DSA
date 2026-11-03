#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size()-1;
        int  farthest=0;
        for(int i=0;i<=n;i++){
            if(i>farthest) return false;
            farthest=max(farthest,i+nums[i]);
            if(farthest>=n) return true;
        }
        return false;
    }
};