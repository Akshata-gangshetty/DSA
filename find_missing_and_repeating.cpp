#include<bits/stdc++.h>
using namespace std;
vector<int>findmissingandrepeating(vector<int>a){
    long long n=a.size();
    long long s=0;
    long long s2=0;
    long long sn=(n*(n+1))/2;
    long long sn2=(n*(n+1)*(2*n+1))/6;
    for (int i = 0; i < n; i++)
    {
       s+=a[i];
       s2+=(long long) a[i]*(long long) a[i];
    }
    long long val1=s-sn;
    long long val2=s2-sn2;
    val2=val2/val1;
    long long x=(val1+val2)/2;
    long long y=x-val1;
    return {(int)x,(int)y};
    
}
int main(){
    vector<int>a={2,3,4,4,1,6};
    vector<int>res=findmissingandrepeating(a);
    cout<<"repeating "<<res[0]<<" missing "<<res[1];
    return 0;
}
