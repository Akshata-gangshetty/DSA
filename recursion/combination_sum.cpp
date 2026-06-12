//TC :2^n * K

#include<bits/stdc++.h>
using namespace std;
void findcombination(int ind ,int target,vector<vector<int>>&ans,vector<int>&ds,vector<int>&arr){
    
    if(ind==arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }
    if (arr[ind]<=target)
    {
        ds.push_back(arr[ind]);
        findcombination(ind,target -arr[ind],ans,ds,arr);
        ds.pop_back();

    }
    findcombination(ind+1,target,ans,ds,arr);
    
}
vector<vector<int>>combinationsum(vector<int>&arr,int target){
    vector<vector<int>>ans;
    vector<int>ds;
    findcombination(0,target,ans,ds,arr);
    return ans;
}
int main(){
    vector<int>arr={1,2,3,5,7};
    vector<vector<int>>ans=combinationsum(arr,7);
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
