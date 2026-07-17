#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int finddays(vector<int>& weights,int mid){
        int sum=0;
        int days=1;
        for(int i=0;i<weights.size();i++){
            if(sum+weights[i]>mid){
                days+=1;
                sum=weights[i];

            }
            else{
                sum+=weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high= accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            int numberofdays=finddays(weights,mid);
            if(numberofdays <=days){
                high=mid-1;

            }
            else{
                low=mid+1;
            }

        }
        return low;
    }
};