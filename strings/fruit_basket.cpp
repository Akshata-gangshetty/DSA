#include<bits/stdc++.h>
using namespace std;
int fruit_basket(vector<int>arr,int k){
    int l=0,r=0,maxlen=0;
    int n=arr.size();
    map<int,int>mpp;
    while(r<n){
        mpp[arr[r]]++;
        if(mpp.size()>k){
            mpp[arr[l]]--;
            if(mpp[arr[l]]==0){
                mpp.erase(mpp[arr[l]]);
            
            }
            l++;      
        }
        if (mpp.size()<=k)
            {
               maxlen=max(maxlen,r-l+1);
            }

            r++;
    }
    return maxlen;
}
int main(){
    vector<int>arr={1,2,1,1,1,3,3,3,2,2,4};
    int k=2;
    int maxlen=fruit_basket(arr,k);
    cout<<maxlen<<" ";
    return 0;
}