//TC:O(N) and SC:O(1)
#include<bits/stdc++.h>
using namespace std;
int subarray_with_max_product(vector<int>a){
    int pre=-1, suff=-1;
    int ans=INT_MIN;
    int  n=a.size();
    for (int i = 0; i < n; i++)
    {
       if(pre==0) pre=1;
       if(suff==0) suff=1;
       pre=pre*a[i];
       suff=suff*a[n-i-1];
       ans=max(ans,max(pre,suff));
    }
    return ans;
    
}
int main(){
    vector<int>a={1,2,3,-1,0,5,0,-1,2,2,6};
    int n=a.size();
   int num=subarray_with_max_product(a);
    cout<<"product is "<< num;
    return 0;
}
