//second largest
#include<bits/stdc++.h>
using namespace std;/*
int sortt(vector<int>arr){
    int secondl;
    
    sort(arr.begin(),arr.end());
   int largest=arr.size()-1;
   for(int i=arr.size()-2;i>=0;i--){
    if(arr[i]!=largest){
        secondl=arr[i];
         break;
    return secondl;
    }

   }

}
int main(){
    vector<int>arr={1,6,4,8,29,4,9};
    cout<<sortt(arr)<<" ";
    return 0;



int Osortt(vector<int>arr){
    int largest=1;
    int slargest=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
     for(int i=0;i<arr.size();i++){
        if(arr[i]>slargest && arr[i]!=largest){
            slargest=arr[i];
        

        }}
        return slargest;
    
}
int main(){
    vector<int>arr={1,6,4,8,29,4,9};
    cout<<Osortt(arr)<<" ";
    return 0;


}*/
int longestsubarray(vector<int>a,long long k){
    map<long long,int>presummap;
    long long sum=0;
    int maxlen=0;
    presummap[0]=-1;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
        
        long long rem=sum-k;
        if(presummap.find(rem)!=presummap.end()){
            int len=i-presummap[rem];
            maxlen=max(maxlen,len);
        }
        if(presummap.find(sum)==presummap.end()){
            presummap[sum]=i;
        }

       
    }
    return maxlen;
}
int main(){
    vector<int>a={1,3,0,1,1,1,2,5,1,2,1};
    long long k=3;
    cout<<longestsubarray(a, k)<<" ";
    return 0;
}



