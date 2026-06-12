 #include<bits/stdc++.h>
 using namespace std;
 int longest_rep_substring(string s,int k){
    int l=0,r=0,maxlen=0,maxf=0;
    vector<int>hash(26,0);
    while(r<s.size()){
        hash[s[r]-'a']++;
        maxf=max(maxf,hash[s[r]-'a']);
        if (((r-l+1)-maxf )>k)
        {
           hash[s[l]-'a']--;
           maxf=0;
           l=l+1;
        }
        if (((r-l+1)-maxf )<=k)
        {
           maxlen=max(maxlen,r-l+1);
           r++;
        }
        
        
    }
    return maxlen;

 }
 int main(){
    string s="aaabbccbdad";
    int maxlen=longest_rep_substring(s,2);
    cout<<maxlen<<" ";
    return 0;
 }
