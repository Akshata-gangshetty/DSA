#include<bits/stdc++.h>
using namespace std;
int characterReplacement(string s, int k)
{
    int l=0, r=0;
    int maxLen = 0;
    int maxFreq = 0;
    vector<int> freq(26,0);
    while(r<s.size())
    {
        freq[s[r]-'A']++;
        maxFreq = max(maxFreq,freq[s[r]-'A']);
        if((r-l+1) - maxFreq > k)
        {
            freq[s[l]-'A']--;
            l++;
        }
        maxLen = max(maxLen,r-l+1);
        r++;
    }
    return maxLen;
}
int main()
{
    string s = "AABABBA";
    int k=2;
    cout << characterReplacement(s,k);
    return 0;
}