#include<bits/stdc++.h>
using namespace std;
//tc:O(n1+n2) and sc:O(1)
vector<int>find_intersection(vector<int>a,vector<int>b){
    int i=0;
    int j=0;
    vector<int>ans;
    while (i<a.size() && j<b.size())
    {
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
        }
        
    }
    return ans;
    
}
int main(){
    vector<int>a={1,2,3,4,5,6};
    vector<int>b={2,3,4,5,6};
    vector<int>ans=find_intersection(a,b);
      for (int i = 0; i<ans.size(); i++)
    {
       cout<<ans[i];
    }
    return 0;

}