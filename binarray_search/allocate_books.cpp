#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countsubarray(vector<int>&nums,int mid){
        int subarray=1;
        long long sumele=0;
        for(int i=0;i<nums.size();i++){
            if(sumele +nums[i] <=mid){
                sumele +=nums[i];
            }
            else{
                subarray +=1;
                sumele=nums[i];
            }
        }
        return subarray;
    }
    int findsubarray(vector<int>& nums,int n, int k){
        if(k>n) return -1;
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            int subarray = countsubarray(nums,mid);
            if(subarray >k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
    int splitArray(vector<int>& nums, int k) {
        return findsubarray(nums,nums.size(),k);
    }
};