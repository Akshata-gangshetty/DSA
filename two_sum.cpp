#include<bits/stdc++.h>
using namespace std;
//tc :O(N x logn) and sc:O(N)
string summ_two(int n,vector<int>book,int target){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        int a=book[i];
        int more=target-a;
        if(mpp.find(more)!=mpp.end()){
          //  return (mpp(more),i);
            return ("yes");
        }
        mpp[a]=i;

    }
    return "no";
}
int main(){
    vector<int>book={1,2,4,5,6,7};
    string s=summ_two(6,book,3);
    cout<<s;
    return 0;
}