#include<bits/stdc++.h>
using namespace std;
//remove duplicate from sorted arrays 
//TC:O(n) and SC:O(1)
int main(){
    int arr[8]={1,1,1,2,2,3,3,3};
    int i=0;
    for (int j=1;j<8;j++){
        if (arr[j]!=arr[i])
        {
           arr[i+1]=arr[j];
           i++;
        }
        
    }
    cout<<i+1<<" ";
    return 0;
}
//Time complexity O(N) and SC:O(1)
