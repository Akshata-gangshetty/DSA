#include<bits/stdc++.h>
using namespace std;
/*int lowr(vector<int>a,int n,int k){
    int low=0;
    int high=n-1;
    int ans=n;
    
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]>=n){
            ans=mid;
            high=mid-1;
          }
          else{
            low=mid+1;
          }
    }
    return ans;

}int lowr(vector<int>a,int n,int k){
   auto it= lower_bound(a.begin()+2,a.end(),k);
   return distance(a.begin()+2,it);
}
int main(){
    vector<int>a={2,3,4,5,6,7,22,99};
    cout<<lowr(a,a.size(),22)<<" ";
    return 0;
}*/
//first and last
pair<int,int> firstandlast(vector<int>a,int n,int x){
  int last=-1;

  int first=-1;
  for(int i=0;i<n;i++){
    if(a[i]==x){
      if(first==-1)
      { first=i;}

      last=i;
    }
  }return {first,last} ;
  
}
int main(){
  vector<int>a={2,3,4,4,4,55,66,77};
  int n=a.size();
  int x=4;
  pair<int,int> result=firstandlast(a, n, x);
  cout<<"first occurence  at"<<result.first<<" "<<endl;
  cout<<"Last occurence  at"<<result.second<<" "<<endl;
  return 0;

}