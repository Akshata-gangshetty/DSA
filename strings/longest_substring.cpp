// Longest substring problem
// TC:O(n) and SCO(1)
#include<bits/stdc++.h>
using namespace std;
int long_substring(string s){
vector<int>haash(256,-1);
int n=s.size();
int l=0;
int r=0;
int maxlen=0;
while(r<n){
    if (haash[s[r]!=-1])
    {
       if (haash[s[r]]>=l)
       {
            l=haash[s[r]]+1;
       }
   }
       int len=r-l+1;
       maxlen=max(len,maxlen);
       haash[s[r]]=r;
       r++;
    
}
return maxlen;
}
int main(){
 string s;
 cout <<"enter a string"<<endl;
 cin>>s;
 int maxlen=long_substring(s);
 cout<<maxlen<<" ";
 return 0;
}
