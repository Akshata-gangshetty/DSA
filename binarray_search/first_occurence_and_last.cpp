#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto lb=lower_bound(nums.begin(),nums.end(),target);
        auto hb=upper_bound(nums.begin(),nums.end(),target);
        if(lb==nums.end() || *lb!=target){
            return {-1,-1};
        }
        int first=distance(nums.begin(),lb);
        int last=distance(nums.begin(),hb)-1;
        return {first,last};


    }
};