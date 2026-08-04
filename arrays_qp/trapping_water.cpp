//TC:O(n) sc:O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
        int l=0,r=n-1;
        int total=0;
        int lmax=0,rmax=0;
        while(l<r){
            if(arr[l]<=arr[r]){
                if(arr[l]<lmax){
                    total+=lmax-arr[l];
                }
                else{
                    lmax=arr[l];
                }
                l++;
            }
            else{
                if(arr[r]<rmax){
                    total+=rmax-arr[r];
                }
                else{
                    rmax=arr[r];
                }
                r--;
            }

        }
        return total;
        
    }
};
