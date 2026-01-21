#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>ls;
    ls.push_back(2);
    ls.push_front(1);
    ls.emplace_back(4);
    for(int n:ls){
        cout<<n<<" ";
    }
    // sort();

    /* deque<int>dq={1,2,3,4,5};
    dq.back();
    for(int n:dq){
        cout<<n<<" ";
    }
    map<int,int>mpp;
    
    mpp[1]=2;
    mpp.emplace(2,3);
    for(auto it :mpp){
        cout<<it.first<<" "<<it.second<<endl;

    }
   
    auto it =mpp.find(1);
    cout<<it->first<<" "<<endl;*/
    
    return 0;
    


}