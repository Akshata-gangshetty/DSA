#include<bits/stdc++.h>
using namespace std;
int findsubarray(vector<int>a,int k){
    map<int,int>mpp;
    mpp[0]=1;
    int presum=0,cnt=0;
    for (int i = 0; i < a.size(); i++)
    {
       presum+=a[i];
       int remove=presum-k;
         cnt+=mpp[remove];
         mpp[remove]+=1;
    }
    return cnt;
    
}
int main(){

    vector<int>a={1,1,-1,2,3,4,1,1,0,0,1,2};
    vector<int>b={1,1,1,2,3,4,1,0,1,1,2};
    int len=findsubarray(a,3);
    int len2=findsubarray(b,3);

    cout<<len<<endl;
     cout<<len2;
    return 0;
}