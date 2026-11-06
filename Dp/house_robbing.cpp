//Time Complexity: O(n) 
//Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        int  prev2=0;
        int prev1=nums[0];
        for(int i=1;i<nums.size();i++){
            int take=nums[i];
            if(i>1) take+=prev2;
            int nottake=0+prev1;
            int cur=max(take,nottake);
            prev2=prev1;
            prev1=cur;

        }
        return prev1;
    }
};