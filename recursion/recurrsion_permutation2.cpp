#include<bits/stdc++.h>
using namespace std;
void recurpermute(int index,vector<int>&nums,vector<vector<int>>ans){
    if(index==nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i=index;i<nums.size();i++){
    swap(nums[index],nums[i]);
    recurpermute(index+1,nums,ans);
    swap(nums[index],nums[i]);
}

}
vector<vector<int>>permute(vector<int>&nums){
    vector<vector<int>>ans;
    recurpermute(0,nums,ans);
    return ans;
}
int main(){
    vector<int>nums={1,3,2};
    vector<vector<int>>ans=permute(nums);
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