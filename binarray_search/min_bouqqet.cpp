//TC:O(N * log(maxi-mini+1))
//SC:O(1);
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool possible(vector<int>& bloomDay, int day,int m, int k){

        int cnt=0,nob=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                cnt++;
                
            }
            else{
                    nob+=(cnt/k);
                    cnt=0;
            }
        }
        nob+=(cnt/k);
        return nob>=m;
        
        
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val= m*1LL*k*1LL;
      if(val>bloomDay.size()) return -1;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int  i=0;i<bloomDay.size();i++){
            mini=min(mini,bloomDay[i]);
             maxi=max(maxi,bloomDay[i]);

        }
        int  low=mini ,high=maxi;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible( bloomDay,mid, m, k)==true){

                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
