#include<bits/stdc++.h>
using namespace std;
int maxConsecutiveOnes(vector<int> &nums,int k)
{
    int l=0, r=0;
    int zeros=0;
    int maxlen=0;
    while(r<nums.size())
    {
        if(nums[r]==0)
        {
            zeros++;
        }
        if(zeros>k)
        {
            while(zeros>k){
                if(nums[l]==0){
                    zeros--;
                }
            l++;
            }
        }
        if(zeros<=k){
        int len=r-l+1;
        maxlen = max(maxlen,len);
        }
        r++;
    }
    return maxlen;
}
int main()
{
    vector<int>nums = {1,1,0,0,1,1,1,0,1,1};
    int k = 2;
    cout << "Maximum consecutive ones: "<<maxConsecutiveOnes(nums,k)<< endl;
    return 0;
}