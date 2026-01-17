#include<bits/stdc++.h>
using namespace std;/*
void merge(vector<int>&arr,int low,int mid,int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++ ;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
     }
     while( left<=mid) {,
        temp.push_back(arr[left]);
            left++ ;
     }   
     while( right<=high) {
        temp.push_back(arr[right]);
        
            right++ ;
     } 
     for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];

     }  
}
void ms(vector<int>&arr,int low,int high){
    
    if(low>=high)return;
    int mid=(low+(high-low))/2;
    ms(arr,low,mid);
    ms(arr ,mid+1,high);
    merge(arr,low,mid,high);
}
void mergesort(vector<int>arr,int n){
    ms(arr,0,n-1);
}
int main(){
    int n;
    cout<<"enter n val";
    cin>> n;
    vector<int>arr(n);
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
   
    mergesort(arr,n);
     cout<<"mergesorted array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;


}
int partition(vector<int>&arr,int low,int high){
    int pivot =arr[low];
    int i=low;
    int j=high;
    while(i<j){
    while( i<=high-1 && arr[i]<=pivot ){
        i++;
}
    while( j>=low+1 && arr[j]>=pivot ){
        j--;}
    if(i<j )swap(arr[i],arr[j]);
}
swap(arr[low],arr[j]);
return j;
}
void qs (vector<int>&arr,int low,int high){
    if (low<high){
        int part=partition(arr,low,high);
            qs(arr,low,part-1);
            qs(arr,part+1,high);
        }
}
int main(){
    vector<int>arr={2,5,1,8,5,3,7};
    qs(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<< " ";
}
    return 

int secons(vector<int>&a,int n){
    int small=a[0];
    int ssmall=-1;
    for(int i=0;i<n;i++){
        if(a[i]<small){
            ssmall=small;
            small=a[i];
        }
        else if(a[i]>small && a[i]<ssmall )
            ssmall=a[i];
     }
    return ssmall;
}
int seconl(vector<int>&a,int n){
    int large=a[0];
    int slarge=0;
    for(int i=0;i<n;i++){
        if(a[i]>large){
            slarge=large;
            large=a[i]; 
        }
        else if(a[i]<large && a[i]>slarge )
            slarge=a[i];
        
    } return slarge;
}
    vector<int> getsl(int n,vector<int>a){
    int slargest=seconl(a,n);
    int ssmallest=secons(a,n);
    return {slargest,ssmallest};
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];}
    cout<<"secondlargest and second smallest are:";
    vector<int> result=getsl(n,a);

    cout<<result[0] <<" "<< result[1]<< " ";
    return 0;


}
//remove duplicate


//left rotation
 void leftrot(vector<int>&arr,int d){
    int n;
    n=arr.size();
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];

    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
        }

 }
int main(){
    
    int d;
    cin>>d;
    vector<int>arr{1,2,3,4,5,6,7 };

    leftrot(arr,d);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";

    }
    return 0;
void leftrot(vector<int>&arr,int d){
    int n;
    n=arr.size();
    reverse (arr,arr+d);
    

}int main(){
    
    int d;
    cin>>d;
    vector<int>arr{1,2,3,4,5,6,7 };

    leftrot(arr,d);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}
vector<int>insertion (vector<int>&n1,vector<int>&n2){
    vector<int>ans;
    int n=n2.size();
    int vis[n]={0};
    for(int i=0;i<n1.size();i++){
        for(int j:n2){
            if(n1[i]==n2[j] && vis[j]==0){
                vis.push_back(n1[i]);
                vis[j]=1;
                break;
               
            }
            if(n2[j]>n1[i]) break;
        }
        return ans;
    }
}

int main(){
    vector<int>n1={1,2,2,4,4,5,7,8};
    vector<int>n2={2,2,4,5,7,7,8};
    cout<<insertion(n1,n1)<< " ";
    return 0;
}
int findmax(vector<int>&arr){
    int max1=0;
    int cnt=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            cnt++;
            max1=max(max1,cnt);

        }
        else{
            cnt=0;
        }
    }
    return max1;
}
int main(){
    vector<int>arr={1,1,0,1,11,1,1,1,2,0};
    
    cout<<findmax(arr)<<" ";

    return 0;

}
//very important subarray
int logestsarray(vector<int>a,long long k){
    map<long long,int>presummap;
    long long sum=0;
    int maxlen=0;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);

        }
        int rem=sum-k;;
        if(presummap.find(rem)!=presummap.end()){
            int len=i-presummap[rem];
            maxlen=max(maxlen,len);
        }
    }
}
    int longestsarray(vector<int>&a,int n,int k){
    
    int len=0;
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
           
            s+=a[j];       
            
            if(s==k)
                { len= max(len,j-i+1);}

        }
    }return len;

}
int main(){

    int n=8;
    vector<int>a;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
    a.push_back(temp);
    }
    cout<<longestsarray(a,n,3)<<" ";
    return 0;


}*/


    

   





