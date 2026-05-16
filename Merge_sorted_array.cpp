#include<bits/stdc++.h>
using namespace std;
void swapifGreator(long long arr1[],long long arr2[],int ind1,int ind2){
    if (arr1[ind1]>arr2[ind2])
    {
        swap(arr1[ind1],arr2[ind2]);
    }
    
}
void merge(long long arr1[],long long arr2[],int n,int m){
    
    int len=(n+m);
    int gap=(len/2)+(len%2);
    while (gap>0)
    {
       int left=0;
        int right=left+gap;
        while(right<len){
            if (left<n && right>=n)
            {
                swapifGreator(arr1,arr2,left,right-n);
            }
            else if(left>=n){
                 swapifGreator(arr2,arr2,left-n,right-n);
            }
            else{
                 swapifGreator(arr1,arr1,left,right-n);
            }
            left++;
            right++;

        }
        if (gap==1)
        {
        break;
        }
        
        gap=(gap/2)+(gap%2);
        
        
        
    }
    
}
int main(){
    long long arr1[]={1,2,5,6};
    long long arr2[]={0,3,7,8};
     int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    merge(arr1,arr2,n,m);
    cout<<"arr1 ";
    for (int i = 0; i < n; i++)
    {
       cout<<arr1[i]<<" ";
    }
    
    cout<<"arr2 ";
    for (int i = 0; i < m; i++)
    {
       cout<<arr2[i]<<" ";
    }
    return 0;

}