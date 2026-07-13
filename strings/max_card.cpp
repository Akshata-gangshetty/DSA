//TC:O(N) and SC:O(1)
#include<bits/stdc++.h>
using namespace std;
int maximumCards(vector<int>&nums, int k)
{
    int n = nums.size();
    int lSum=0;
    int rSum=0;
    int maxSum=0;
    for(int i=0; i<k; i++)
    {
        lSum = lSum+nums[i];
    }
    maxSum = lSum;
    int rindex = n-1;
    for(int i=k-1; i>=0; i--)
    {
        lSum = lSum-nums[i];
        rSum = rSum+nums[rindex];
        rindex=rindex-1;
        maxSum = max(maxSum,lSum+rSum);
    }
    return maxSum;
}
int main()
{
    vector<int> nums = {6,2,3,4,7,2,1,7,1};
    int k=4;
    int result = maximumCards(nums,k);
    cout<<"Maximum points you can obtain: "<< result << endl; 
    return 0;

}
