#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=0;
        long long high=num;
        long long mid;
        long long ans=1;
        while(low<=high){
            mid=(low+high)/2;
            ans=mid * mid;
            if(ans==num){
                return true;
            }
            else if(ans<num){
               
               low=mid+1;
            }
            else{
                 high=mid-1;
            }
        }
        return false;
    }
};