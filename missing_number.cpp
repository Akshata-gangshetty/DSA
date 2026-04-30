#include<bits/stdc++.h>
using namespace std;
int missing_no(vector<int>a,int n){
    int xor1=0,xor2=0;
    int N=n-1;
    for (int i = 0; i <N ; i++)
    {
       xor2=xor2^a[i];
        xor1=xor1^(i+1);
       
    }
     xor1=xor1^n;
    return xor1^xor2;
      
}
int main(){
    vector<int>a={1,2,3,5,6};
    int n=a.size();
   int num=missing_no(a,n);
    cout<<"missing number is "<<num;
    return 0;
}