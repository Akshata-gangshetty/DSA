#include<bits/stdc++.h>
//TC:2^N AND SC: o(1)
using namespace std;
int printF(int ind,int s,int sum,int arr[],int n){
    if (s>sum) return 0;
    if(ind ==n){
        if(s==sum)return 1;
        return 0;
    }
   
   
    s+=arr[ind];
    int l=printF(ind+1,s,sum,arr,n);
     
     s-=arr[ind];
      int r=printF(ind+1,s,sum,arr,n);
      return l+r;
    
}
int main(){
    int arr[]={1,2,1};
    vector<int>ds;
    int n=3;
    
   cout<< printF(0,0,2,arr,n);
    return 0;
}