#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
      vector<int>freq(128,0);
      for(char c:s){
        freq[c]++;
      }
      int ans=0;
      for(int count: freq){
        ans+=(count/2)*2;

      }
      if(ans<s.size()){
        ans++;
      }
      return ans;
    }
};