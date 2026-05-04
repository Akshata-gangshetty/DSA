//kadane's Algorithm
//TC:O(N) and SC:O(N)
#include<bits/stdc++.h>
using namespace std;
int kadane_algo(vector<int>a){
    long long sum=0;
    int maxi=INT_MIN;
    int ansstart=-1;
    int ansend=-1;
    int start=0;
    for(int i=0;i<a.size();i++){
        if(sum==0)  start=i;
        sum+=a[i];
        if(sum>maxi){
            maxi=sum;
            ansstart=start;
            ansend=i;
        }
        if(sum<0){
            sum=0;
        }
    }
    return maxi;

}
int main(){
    vector<int>a={-1,-2,3,-4,5,1,-1,-2,4};
    int maxi=kadane_algo(a);
    cout<<maxi;
    return 0;
}
