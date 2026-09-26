#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int LongestSubstring(string s,int k)
{
    int maxlen = 0;
    int l = 0;
    int r = 0;
    unordered_map<char,int> mpp;
    while(r < s.size())
    {
        mpp[s[r]]++;
        if(mpp.size() > k)
        {
            mpp[s[l]]--;
            if(mpp[s[l]] == 0)
            {
                mpp.erase(s[l]);
            }
            l++;
        }
        if(mpp.size()<=k)
        {
            maxlen = max(maxlen,r-l+1);
        }
        r++;
    }
    return maxlen;
}
int main()
{
    string s = "aaabbccd";
    int k = 2;
    cout << "Longest substring length:"<<LongestSubstring(s,k)<<endl; 
    return 0;
}