#include<bits/stdc++.h>
using namespace std;
vector<int>nextgreater_permutation(vector<int>a){
    int ind=-1;
    int n=a.size();
    for (int i = n-2; i >=0; i--)
    {
        if(a[i]<a[i+1]){
            ind=i;
            break;
        }
    }
    if (ind==-1)
    {
       reverse(a.begin(),a.end());
       return a;
    }
    for (int i = n-1; i >ind; i--)
    {
        if (a[i]>a[ind])
        {
           swap(a[i],a[ind]);
           break;
        } 
    }
    reverse (a.begin()+ind+1,a.end());
    return a;  
}
int main(){
    vector<int>a;
    for (int i = 0; i < 6; i++)
    {   cout<<" enter";
        cin>>a[i];
    }
    vector<int>b=nextgreater_permutation(a);
    for (int i = 0; i < b.size(); i++)
    {
        cout<<b[i]<< " ";
        
    }
    
    return 0;
}