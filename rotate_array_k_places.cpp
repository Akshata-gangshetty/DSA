#include<bits/stdc++.h>
using namespace std;
//Rotate by only one O(n)and extra space O(1)
// vector<int>oneLeft_rotate_array(vector<int>arr,int n){
//     int temp=arr[0];
//     for(int i=0;i<n;i++){
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]=temp;
//     return arr;
// }


// int main(){
//         vector<int>arr={1,2,3,4,5};
//         vector<int>array=oneLeft_rotate_array(arr,5);

//         for(int i=0;i<array.size();i++){
//             cout<<array[i];
//         }
//         return 0;
// }
//rotate by d place TC:O(2N) and SC:O(1)
// void leftrotate(int arr[],int n,int d){
//     reverse(arr,arr+d);
//     reverse(arr+d,arr+n);
//     reverse(arr,arr+n);
// }
vector<int>moveallzero(int n,vector<int>&arr){
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1) return arr;
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return arr;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int d;
    // cin>>d;
    // leftrotate(arr,n,d);
    vector<int>a=moveallzero(n,arr);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<< " ";
    }
    return 0;
    

}