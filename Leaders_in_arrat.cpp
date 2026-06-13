#include<bits/stdc++.h>
using namespace std;
vector<int>superiorElement(vector<int>&a){
    vector<int>ans;
    int maxi=INT_MIN;
    int n=a.size();
    //TC:O(N ) for loop and SC:O(N) only storing
    for (int i = n-1; i >=0 ; i--)
    {
        if (a[i]>maxi)
        {
           ans.push_back(a[i]);
        }
        maxi=max(maxi,a[i]);
        
    }
    //O(Nlog N) sorting
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    vector<int>a(6);
    for (int i = 0; i < 6; i++)
    {   cout<<" enter"<<endl;
        cin>>a[i];
    }
    vector<int>b=superiorElement(a);
    for (int i = 0; i < b.size(); i++)
    {
        cout<<b[i]<< " ";
        
    }
    
    return 0;
}
