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
void leftrotate(int arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    leftrotate(arr,n,d);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
    }
    return 0;
    

}