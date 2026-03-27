#include<bits/stdc++.h>
using namespace  std;
int maxpoints(vector<int>arr,int k){
    int n=arr.size();
    int lsum=0;
    int rsum=0;
    int maxsum=0;
    for (int i = 0; i <= k-1; i++)
    {
        lsum=lsum+arr[i];
    }
    maxsum=lsum;
    int rindex=n-1;
    for (int i = k-1; i >=0; i--)
    {
      lsum=lsum-arr[i];
      rsum=rsum+arr[rindex];

      rindex=rindex-1;
      maxsum=max(maxsum,lsum+rsum);
    }
    return maxsum;  
}
int main(){
    vector<int>arr={6,2,3,1,7,8,2,9,4};
    int k=4;
   int  maxpoint=maxpoints(arr,k);
    cout<<maxpoint<<" ";
    return 0;
}