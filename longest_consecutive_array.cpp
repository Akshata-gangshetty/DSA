//better approch
#include<bits/stdc++.h>
using namespace std;
// int longest_successive_element(vector<int>&a){
//     if (a.size()==0)
//     {
//        return 0;
//     }
//     sort(a.begin(),a.end());
//     int n=a.size();
//     int lastsmaller=INT_MIN;
//     int cnt=0;
//     int longest=1;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i]-1==lastsmaller)
//         {
//             cnt+=1;
//             lastsmaller=a[i];
//         }
//         else if (lastsmaller!=a[i])
//         {
//             cnt=1;
//             lastsmaller=a[i];
//         }
//         longest=max(longest,cnt);
         
        
//     }
    
//    return longest; 
// }
//TC:O(N)+O(2N) and SC:O(N)
int longest_successive_element(vector<int>&a){
    int n=a.size();
    if(n==0) return 0;
    int longest=1;
    unordered_set<int>st;
    for(int i=0;i<n;i++){//O(N)
        st.insert(a[i]);
    }
    for(auto it:st){//whileloop will not take O(N)as it run in particular codition so  TC:O(2N) 
        if(st.find(it-1)== st.end()){
            int cnt=1;
            int  x=it;
            while (st.find(x+1)!=st.end())
            {
                x=x+1;
                cnt=cnt+1;
            }
            longest=max(longest,cnt);
            
        }
    }
    return longest;
}
int main(){
    vector<int>a={1,1,1,2,1,3,2,5,5,3,1,4,4};
    int longest=longest_successive_element(a);
    cout<<longest;
    return 0;
}