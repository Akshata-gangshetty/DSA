#include<bits/stdc++.h>
using namespace std;
void  funcs(int ind,vector<int>&a,vector<int>&ds,vector<vector<int>>&ans){
    ans.push_back(ds);
    for(int i=ind;i<a.size();i++){
        if(i!=ind && a[i]==a[i-1]) continue;
        ds.push_back(a[i]);
        funcs(i+1,a,ds,ans);
        ds.pop_back();
    }
}
vector<vector<int>>subset(vector<int>&a){
    vector<vector<int>>ans;
    vector<int>ds;
    sort(a.begin(),a.end());
    funcs(0,a,ds,ans);
    return ans;
}
int main(){
    vector<int>a={1,3,2,2,2,3};
    vector<vector<int>>ans=subset(a);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j <ans[i].size() ; j++)
        {
            cout<<ans[i][j]<< " ";
        }
        cout<<endl;
    }
       
    return 0;
}