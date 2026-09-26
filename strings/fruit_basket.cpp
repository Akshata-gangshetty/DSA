#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int totalFruits(vector<int> &arr)
{
    int l=0, r=0;
    int maxlen=0;
    int k=2;
    unordered_map<int,int> mpp;
    while(r < arr.size())
    {
        mpp[arr[r]]++;
        while(mpp.size()>k)
        {
            mpp[arr[l]]--;
            if(mpp[arr[l]]==0)
            {
                mpp.erase(arr[l]);
            }
            l++;
        }
        if(mpp.size()<=k)
        {
            maxlen = max(maxlen,r-l+1);
        }
        r++;
    }
    return maxlen;  
}
int main()
{
    vector<int> arr = {3,3,3,1,2,1,1,2,3,3,4};
    cout<<"Maximum fruits:"<<totalFruits(arr)<<endl;
    return 0;
}