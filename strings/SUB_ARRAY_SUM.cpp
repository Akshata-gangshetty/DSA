//TC:O(n) and sc:O(1)
#include <iostream>
#include <vector>
using namespace std;
int SubarraywithSum(vector<int>& nums,int goal)
{
    if(goal < 0) return 0;
    int l=0, r=0, sum=0,count=0;
    while( r < nums.size())
    {
        sum += nums[r];
        while(sum > goal)
        {
            sum -= nums[l];
            l=l+1;
        }
        count += (r-l+1);
        r=r+1;
    }
    return count;
}
int main()
{
    vector<int> nums = {1,0,0,1,1,0};
    int goal = 2;
    cout << "Number of subarrays: "<< SubarraywithSum(nums,goal) << endl;
    return 0;

}
