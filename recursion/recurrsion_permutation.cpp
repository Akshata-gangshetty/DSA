//TC:n! * n
//SC:O(n)+O(n)
#include<bits/stdc++.h>
using namespace std;
void recurpermute(vector<int>&ds,vector<int>&a,vector<vector<int>>&ans,int freq[]){
    if(ds.size()==a.size()){
        ans.push_back(ds);
        return;
    }
    for ( int i = 0; i < a.size(); i++)
    {
        if (!freq[i])
        {
           ds.push_back(a[i]);
           freq[i]=1;
           recurpermute(ds,a,ans,freq);
           freq[i]=0;
           ds.pop_back();
        }
        
    }
    
}
vector<vector<int>>permute(vector<int>&a){
    vector<vector<int>>ans;
    vector<int>ds;
    int freq[a.size()]={0};
   for (int i = 0; i <a.size(); i++)
        freq[i]=0;
   recurpermute(ds,a,ans,freq);
    return ans;
}
int main(){
    vector<int>a={1,3,2};
    vector<vector<int>>ans=permute(a);
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
