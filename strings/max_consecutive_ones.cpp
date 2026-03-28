 #include<bits/stdc++.h>
 using namespace std;
int Max_consecutive_ones(vector<int>a,int k){
    int l=0,r=0,len=0,maxlen=0,zero=0;
    while(r<a.size()){
        if (a[r]==0) 
        {
           zero++;
        }
        if (zero>k)
        {
            if (a[l]==0)
            {
                zero--;
            }
            l++;
            
        }
        if (zero<=k)
        {
          len=r-l+1;
          maxlen=max(maxlen,len);
        } 
        r++;     
    }
    return maxlen;
}
int main(){
    vector<int>a={1,1,1,1,0,0,1,0,1,1,1,1};
    int k=2;
    cout<<"maximum conscutive ones ";
    int maxlen=Max_consecutive_ones(a,k);
    cout<<maxlen<<" ";
    return 0;
}