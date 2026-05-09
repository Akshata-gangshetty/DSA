#include<bits/stdc++.h>
using namespace std;
int majority_element(vector<int>a){
    int cnt=0;
    int ele;
    for(int i=0;i<a.size();i++){
        if(cnt==0){
            cnt=1;
            ele=a[i];
        }
        else if (a[i]==ele)
        {
           cnt++;
        }
        else
        {
            cnt--;
        }
    }
    int cnt1=0;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i]==ele)cnt1++;

    }
    if(cnt1>(a.size())/2)
    {
        return ele;
    }
    return -1;
}
int main(){
    vector<int>a={1,1,1,2,1,3,2,1,1,3,1,1,1};
    int ele=majority_element(a);
    cout<<ele;
    return 0;
}