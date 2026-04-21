#include<bits/stdc++.h>
using namespace std;
int only_once(vector<int>a){
    int xor1=0;
    for (int i = 0; i <a.size(); i++)
    {
        xor1=xor1^a[i];
    }
    return xor1;
    
}
int main(){
    vector<int>a={1,1,2,2,3,4,4,5,5};
    int once=only_once(a);
    cout<<once;
    return 0;
}