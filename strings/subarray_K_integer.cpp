#include<bits/stdc++.h>
using namespace std;
int atMostK(vector<int>&nums,int k)
{
    unordered_map<int,int> freq;
    int l=0, r=0, cnt=0;
    for(r=0; r < nums.size(); r++)
    {
        freq[nums[r]]++;
        while(freq.size()>k)
        {
            freq[nums[l]]--;
            if(freq[nums[l]]==0)
            {
                freq.erase(nums[l]);
            }
            l++;
        }
        cnt=cnt+(r-l+1);
    }
    return cnt;
}


int subarrayWithKDistinct(vector<int>&nums,int k)
{
    return atMostK(nums,k)-atMostK(nums,k-1);
}
int main()
{
    vector<int> nums={1,2,1,2,3};
    int k=2;
    cout << "Number of subarrays with k distinct integers : "<<subarrayWithKDistinct(nums,k)<<endl;
    return 0;
}