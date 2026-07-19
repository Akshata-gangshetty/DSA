#include<bits/stdc++.h>
using namespace std;
string minWindow(string s, string t)
{
    vector<int> hash(256,0);
    for(char c :t)
    {
        hash[c]++;
    }
    int l=0, r=0;
    int cnt = 0;
    int minLen = INT_MAX;
    int sIndex = -1;
    int n = s.size();
    while(r < n)
    {
        if(hash[s[r]]>0) cnt++;
        hash[s[r]]--;
    }
    while(cnt == t.size())
    {
        if(r-l+1 < minLen)
        {
            minLen = r-l+1;
            sIndex = 1;
        }
        hash[s[l]]++;
        if(hash[s[l]]>0){
        cnt--;
        l++;
    }
    r++;
}
return (sIndex == -1) ? " " : s.substr(sIndex,minLen);
}
int main()
{
    string s = "ddaaabbca";
    string t = "abc";
    cout << "minimum window"<<minWindow(s,t)<<endl;
    return 0;
}