
#include<bits/stdc++.h>
using namespace std;
vector<int> majority_element(vector<int>a){
    int cnt1=0,cnt2=0;
    int ele1,ele2;
    for(int i=0;i<a.size();i++){
        if(cnt1==0 && ele2!=a[i]){
            cnt1=1;
            ele1=a[i];
        }
        else if(cnt2==0 && ele1!=a[i]){
            cnt2=2;
            ele2=a[i];
        }

        else if (a[i]==ele1)
        {
           cnt1++;
        }
        else if (a[i]==ele2)
        {
           cnt2++;
        }
        else
        {
            cnt1--;
             cnt2--;
        }
    }
    vector<int>ls;
     cnt1=0,cnt2=0;

    for (int i = 0; i < a.size(); i++)
    {
        if(a[i]==ele1)cnt1++;
        if(a[i]==ele2)cnt2++;

    }

    int mini=a.size()/3;
    if(cnt1>=mini) ls.push_back(ele1);
    if(cnt2>=mini) ls.push_back(ele2);
   
    sort(ls.begin(),ls.end());
    return ls;
}
int main(){
    vector<int>a={1,1,2,2,1,3,2,1,1,3,2,1,1};
    vector<int> ls=majority_element(a);
    for (int i = 0; i < ls.size(); i++)
    {
        cout<<ls[i]<<" ";
    }
    
    return 0;
}