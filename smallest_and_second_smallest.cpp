#include<bits/stdc++.h>
using namespace std;
//smallest element TC:O(N) and SC:O(1)
int smallest_ele(vector<int>arr){
    int i=0;
    int smallest=arr[0];
    for(i=0;i<arr.size();i++){
        if (arr[i]<smallest)
        {
            smallest=arr[i];
        }
        
    }
    return smallest;
}
//second smallest TC:O(N) ,SC:O(1)
int sec_smallest_ele(vector<int>arr){
    int smallest=arr[0];
    int ssmallest=-1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]<smallest)
        {

            ssmallest=smallest;
            smallest=arr[i];
        }
        else if (arr[i]>smallest && arr[i]<ssmallest)
        {
           ssmallest=arr[i];
        }
        
        
    }
    return ssmallest;
    
}
int main(){
    vector<int>arr={8,3,1,4,9,9,5,2,7};
    int largest=smallest_ele(arr);
    int slargest=sec_smallest_ele(arr);
    cout<<"Smallest element is "<<largest<< " and" <<"second smallest "<<slargest<<" ";
    return 0;
}
