#include<bits/stdc++.h>
using namespace std;
void func(int ind,int sum,vector<int>&arr,int N,vector<int>&sumsubset){
    if(ind==N){
        sumsubset.push_back(sum);
        return;
    }
    func(ind+1,sum+arr[ind],arr,N,sumsubset);
    func(ind+1,sum,arr,N,sumsubset);
}
vector<int>subsetsum(vector<int>arr,int N){
    vector<int>sumsubset;
    func(0,0,arr,N,sumsubset);
    sort(sumsubset.begin(),sumsubset.end());
    return sumsubset;

}
int main(){
    vector<int>arr={3,1,2};
    vector<int>ans=subsetsum(arr,3);
    for (int i = 0; i < ans.size(); i++)
    {
        
            cout<<ans[i]<< " ";
        
        cout<<endl;
    }
       
    return 0;
}