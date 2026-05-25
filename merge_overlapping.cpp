#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>mergeoverlapping(vector<vector<int>>arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());

    vector<vector<int>>ans;
    for (int i = 0; i < n; i++)
    {
        if (ans.empty() || arr[i][0]>ans.back()[1])
        {
            ans.push_back(arr[i]);

        }
        else
        {
            ans.back()[1]=max(ans.back()[1],arr[i][1]);
        }   
    }
    return ans;  
}
int main(){
    vector<vector<int>>arr={{1,2},{2,4},{3,6},{12,16},{13,17}};
    vector<vector<int>>ans=mergeoverlapping(arr);
    cout<<"Merge overlapping"<<endl;
    for (auto &&i : ans)
    {
        for (int j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;

}
