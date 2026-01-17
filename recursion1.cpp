

 /*void pp(int i,int sum){   
    if(i<1){
        cout<<sum<<" ";
        return  ;}
     pp(i-1,sum+i);
    
}
int main(){int n;
    cout<<"enter n";
    cin>> n;
    cout<< "sum is"<<endl;
    pp(n,0);
    return 0;
}*/ 
/*#include<bits/stdc++.h>
using namespace std;             
int sum(int n){
    if (n==0)
        return 1;
    else
        return n*(sum(n-1));
}
int main(){
    int n=4;
    cout<<sum(n)<< " ";
    return 0;

}
#include<bits/stdc++.h>
using namespace std;        
void   reu(int i,int arr[],int n){
    
    if(i>=n) return  ;
    swap (arr[i],arr[n]);
    reu(i+1,arr,n-1);
;}
int main(){
    int arr[5]={1,2,3,4,5};
   
     reu(0,arr,4);
     for(int i=0;i<5;i++)
         cout<<arr[i]<<" ";
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
 /*void recur( int i,int arr[],int n){
    if (i>=n/2) return ;
    swap(arr[i],arr[n-i-1]);
    recur(i+1,arr,n-1);

}
int main(){
    int i;
    int arr[5];
    cout<<"enter the array";
    for(i=0;i<5;i++) cin>>arr[i];
    recur(0,arr,5);
    for(i=0;i<5;i++) cout<<arr[i]<<" ";
bool pal(int i,int s[],int n){
        if (i>=n/2) return true;
        if (s[i]!=s[n-i-1]) return false;
        return  pal(i+1,s,n-1);

    }
int main(){
        int i ;
        int s[5];
        cout<<"enter the array";
        for(i=0;i<5;i++) cin>>s[i];
        pal(0,s,5);
        for(i=0;i<5;i++) cout<<s[i];

    return 0;}*/
     int fib(int n){
        if(n<=1)return n;
        int last=fib(n-1);
        int slast= fib(n-2);
        return last+slast;
    }
    int main(){
        int n;
        cout<<"enter the val of n";
        cin>>n;
        for (int i=0;i<n;i++) {
         cout<<   fib(i)<<" ";}
        return 0;
        
    }


    





