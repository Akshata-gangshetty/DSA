#include<bits/stdc++.h>
using namespace std;
int nice_subarray(vector<int>arr,int k){
    int l=0,r=0,maxlen=0,cnt=0,sum=0;
    while(r<arr.size()){
        sum=sum+(arr[r]%2);
        while (sum>k)
        {
           sum=sum-(arr[l]%2);
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