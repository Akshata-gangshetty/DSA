//Time Complexity: O(n) 
//Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(vector<int>& nums,int start,int n){
        int prev=0;
        int prev2=0;
        for(int i=start;i<=n;i++){
            int take = nums[i] + prev2;
            int notTake = prev;

            int curr = max(take, notTake);

            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int first=solve(nums,0,n-2);
        int second=solve(nums,1,n-1);
        return max(first,second);
    }
};