#include<bits/stdc++.h>
using namespace std;
//TC:O(N) and SC:O(1)
int nice_subarray(vector<int>arr,int k){
    int l=0,r=0,maxlen=0,cnt=0,sum=0;
    while(r<arr.size()){
        sum=sum+(arr[r]%2);
        while (sum>k)
        {
           sum=sum-(arr[l]%2);//it only increment never decrease or 0 and so max level reach is N so it both loop execute N times
           l++;
        }
        cnt+=(r-l+1);
        r++;
        
    }
    return cnt;
}
int main(){
    vector<int>arr={1,1,1,0,1,1,0};
    int maxlen=nice_subarray(arr,2);
    cout<<maxlen<<" ";
}
