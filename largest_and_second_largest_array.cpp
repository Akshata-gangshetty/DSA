#include<bits/stdc++.h>
using namespace std;

int largest_ele(vector<int>arr){
    int i=0;
    int largest=arr[0];
    for(i=0;i<arr.size();i++){
        if (arr[i]>largest)
        {
            largest=arr[i];
        }
        
    }
    return largest;
}
int sec_largest_ele(vector<int>arr){
    int largest=arr[0];
    int slargest=-1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]>largest)
        {

            slargest=largest;
            largest=arr[i];
        }
        else if (arr[i]<largest && arr[i]>slargest)
        {
           slargest=arr[i];
        }
        
        
    }
    return slargest;
    
}
int main(){
    vector<int>arr={8,3,1,4,9,9,5,7};
    int largest=largest_ele(arr);
    int slargest=sec_largest_ele(arr);
    cout<<"largest element is  "<<largest<< "and" <<"second largest"<<slargest<<" ";
    return 0;
}