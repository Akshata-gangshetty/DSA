//TC:O(N) and SC:O(1)
#include<bits/stdc++.h>
using namespace std;
void sortArray(vector<int>&arr){
    int low=0;
    int mid=0;
    int n=arr.size();
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main(){
    vector<int>arr={1,2,0,0,0,1,1,2,2};
    sortArray(arr);
    for (int i = 0; i < arr.size(); i++)
    {
       cout<<arr[i]<<endl;
    }
    return 0;
}
