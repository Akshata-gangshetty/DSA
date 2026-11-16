//TC:O(N X s2)
//SC:O(s2)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
       for(int i=0;i<nums.size();i++){
        sum+=nums[i];
       }
       if(abs(target)>sum) return 0;
       if((sum+target)%2!=0) return 0;
       int s2=(sum+target)/2;
       vector<int>prev(s2+1,0);
       vector<int>cur(s2+1,0);
       if(nums[0]==0){prev[0]=2;}
       else{
        prev[0]=1;
       }
       if(nums[0]!=0 && nums[0]<=s2){
        prev[nums[0]]=1;
       }
       for(int ind=1;ind<nums.size();ind++){
        for(int i=0;i<=s2;i++){
            int nottake=prev[i];
            int take=0;
            if(nums[ind]<=i) take=prev[i-nums[ind]];
            cur[i]=take+nottake;
        }
        prev=cur;
       }
      return prev[s2];
    }
};