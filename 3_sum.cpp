#include<bits/stdc++.h>
using namespace std;
//TC:O(N)+O(NlogN) 
//SC:O(no of triplets)
vector<vector<int>>triplet_list(int n,vector<int>nums){
    vector<vector<int>>ans;
    for (int i = 0; i < n; i++)
    {
        sort(nums.begin(),nums.end());
        if (i>0 && nums[i]==nums[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if (sum<0)
            {
                j++;
            }
            else if (sum>0)
            {
                k--;
            }
            else
            {
                vector<int>temp={nums[i],nums[j],nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while (j<k && nums[j]==nums[j-1]) j++;
                while (j<k && nums[k]==nums[k+1]) k--;
                
                
            }
            
        }
        
    }
    return  ans;
    
}
int main(){
    vector<int>nums={-1,0,2,-1,2,0,0,2,-1,2};
    int n=nums.size();
    vector<vector<int>>triplet=triplet_list(n,nums);
    cout<<"Triplet are"<<endl;
    for (int i = 0; i < triplet.size(); i++)
    {
        for (int j = 0; j < triplet[j].size(); j++)
        {
           cout<<triplet[i][j]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
