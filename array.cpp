/*
//#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter val ";
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;

    }
    int q;
    cout<<"enter value of q";


    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<hash[number]<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter string ";
    cin>> s;
    
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;

    }
    int q;
    cout<<"enter value of q";
;

    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter the val of n"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
map<int,int>ap;
for(int i=0;i<n;i++){
    ap[arr[i]]++;
}
for(auto it:ap){
    cout<<it.first<<"-->"<<it.second<<endl;
    auto nextit=it;
    ++ nextit;
    if(nextit.second>it.second){
        cout<<"element has highest frequecy";
        }
    if(nextit.second<it.second){
        cout<<"element has least frequecy";
        
        }
    
    
}

int q;
cout<<"enter the val of q";
cin>>q;
while(q--){
    int num;
    cin>>num;

    cout<< "Digit appeared in number:   ";
    cout<<ap[num]<< endl;

}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=8;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxf=0,minf=0;
    int nummax=-1,nummin=-1;
    map<int,int>mpp;
    for(int i=0;i<n;i++){
    mpp[arr[i]]++;
}

    for(auto it:mpp){
        if(it.second>maxf){
            maxf=it.second;
            nummax=it.first;
        }
        if(it.second<maxf){
            minf=it.second;
            nummin=it.first;
        }

        

    }
    cout<<"highest Frequecy number:  ";
    cout<< nummax;
    cout<<"Least Frequecy number:  ";
    cout<< nummin;
    return 0;



#include<bits/stdc++.h>
using namespace std;
 void selection_sort(int arr[],int n){

    
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini])
        {   mini=j;
        }
        }
        int temp=arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;
    }
}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    selection_sort(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<< "  ";
    return 0;

}
#include<bits/stdc++.h>
using namespace std;
void bubble_sort (int arr[],int n){
    for(int i=n-1;i>=0;i--){
        int didswap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didswap=i;
            }
        }
        if(didswap==0){
            break;
        }
        cout<<"runs\n";
    }
}
int main(){
    int n;
    
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<" sorted array is :"<<endl;
    bubble_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
        }
    }
}
int main(){
    int n;
    
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<" sorted array is :"<<endl;
    insertion_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    
    return 0;
}*/






