#include<bits/stdc++.h>
using namespace std;
vector<int>rearranged_array(vector<int>&num){
    int n=num.size();
    vector<int>ans(n,0);
    int posindex=0,negindex=1;
    for (int i = 0; i < n; i++)
    {
       if (num[i]<0)
       {
            ans[negindex]=num[i];
            negindex +=2; 
       }
       else
       {
            ans[posindex]=num[i];
            posindex +=2;
       }  
    }
    return ans;   
}
int main(){
    vector<int>num={-1,2,3,-4,-5,6};
    vector<int>ans=rearranged_array(num);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
    
}