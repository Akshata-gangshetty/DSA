//TC:O(N) and SC:O(1)
#include<bits/stdc++.h>
using namespace std;
int max_cons_ones(vector<int>arr){
    int cnt=0;
    int maxk=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            cnt++;
            maxk=max(maxk,cnt);
        }
        else{
            cnt=0;
        }
    }
    return maxk;
}
int main(){
    vector<int>arr={1,1,1,0,0,1,1,1,1,0,1};
    int max=max_cons_ones(arr);
    cout<<max<< " ";
    return 0;
}
