#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n;
//     cout<<"enter val";
//     cin>> n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     vector<int> hassh(13,0);
//     for (int i = 0; i < n; i++)
//     {
//        hassh[arr[i]]++;
//     }
//     int q;
//     cout<<"enter q val";
//     cin>> q;
//     while(q--){
//         int num;
//         cout<<"enter num";
//         cin>>num;
//         cout<<hassh[num]<< " "<<endl;
//     }
    
// }
// void selectionsort(int arr[],int n){ 
//O(n)
//     int i,j,temp;
    
//     for(i=0;i<n-2;i++){
//         int min=i;
//         for(j=i;j<n-1;j++){
//            if ( arr[j]<arr[min])

//            {
//              min=j;
//            }
//              temp=arr[min];
//         arr[min]=arr[i];
//         arr[i]=temp;
           
//         }
      
//     }
// }
// void bubblesort(int arr[],int n){ //bestcase=O(n),worst and avg=O(n^2)
//     int i,j,temp;
//     for(i=n-1;i>=1;i--){
//         for(j=0;j<=i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
// }
// void insertion_sort(int arr[],int n){//O(n)
//     int i,j,temp;
//     for(i=0;i<n-1;i++){
//         j=i;
//         while (j>0 && arr[j-1]>arr[j])
//         {
//           temp=arr[j-1];
//           arr[j-1]=arr[j];
//           arr[j]=temp;
//           j--;
           
//         }       
//     }
// }
void merge(vector<int>arr,int low,int mid,int high ){
    int left=low;
    int right=high;
    vector<int> temp;
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    } 
    while (left<=mid)
    {
     temp.push_back(arr[left]);
            left++;
    }
     while (right<=high)
    {
      temp.push_back(arr[right]);
            right++;
    }
    
}
void ms(vector<int>&arr,int low,int high ){
    if(low==high) return;
    int mid=(low+high)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr,low,mid,high);
}
void  mergesort(vector<int>&arr,int n){
    ms(arr,0,n-1);
}

int main(){
   int n;
   cout<<"enter n value";
   cin>>n;
   vector<int> arr;
   for(int i=0;i<n;i++){
           arr.push_back(i);

   }mergesort(arr,n);
   for (int i = 0; i <n; i++)
   {
        cout<<arr[i]<< " ";
   }
   return 0;   
}


/*if(issubset(a,b)){
        cout<<"true"<<endl;
bool issubset(vector<int>&a,vector<int>&b){
    int m=a.size(),n=b.size();
    for(int i=0;i<n;i++)
    {
        bool found=false;
    
    for(int j=0;j<m;j++){
        if (b[i]==a[j]){
            found=true;
            a[j]=-1;
            break;
    }
}
if(!found)return false;
}return true;
}

int main()
{
    vector<int>a={11,3,4,5,21,6};
     vector<int>b={11,3,4,1};
     if(issubset(a,b)){
        cout<<"true"<<endl;}
    else{
        cout<<"false"<<endl;
     }
     return 0;
    


}
bool issubset(vector<int>&a,vector<int>b){
    multiset<int>hashset(a.begin(),a.end());
    for(int num:b){
        if(hashset.find(num)==hashset.end()){
            return false;

        }
        hashset.erase(hashset.find(num));
    }
    return true;
}
int main(){
    vector<int>a={1,2,3,4,5};
    vector<int>b={1,2,5};
    if(issubset(a,b)){
        cout<<"true"<<endl;}
    else{
        cout<<"false"<<endl;
     }
     return 0;

}
//disjoint
bool aredisjoint(vector<int>&a,vector<int>&b){
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            if(a[i]==b[j])
                return false;
            
        }
    }
        return true;

    }
    int main(){
        vector<int>a={1,2,3,5,6};
        vector<int>b={11,62,63,55};
         if(aredisjoint(a,b)){
        cout<<"true"<<endl;}
    else{
        cout<<"false"<<endl;
     }
     return 0;


    }*/

