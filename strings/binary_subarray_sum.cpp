//TC:O(N) and SC:O(1)
#include<bits/stdc++.h>
using namespace std;
int binary_subarray_sum(vector<int>arr,int k){
    int l=0,r=0,sum=0,cnt=0,maxlen=0;
    while (r<arr.size())
    {
       sum+=arr[r];
       while (sum>k)// it only increment never decrease or 0 and so max level reach is N so it both loop execute N times
       {
            sum=sum-arr[l];
            l=l+1;
       }
       cnt=cnt+(r-l+1);
       r++;
       
    }
    return cnt;
    
}
int main(){
    vector<int>arr={1,1,1,0,1,1,0};
    int maxlen=binary_subarray_sum(arr,2);
    cout<<maxlen<<" ";
}
