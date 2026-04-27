//To find longest subarray with sum k
//TC:O(N x logn) and SC:O(n)
#include<bits/stdc++.h>
using namespace std;
//for positves,negatives and for zero
int largestsubarraywithsumk(vector<int>a,long long k){
    map<long long,int>presummap;
    long long sum=0;
    int maxlen=0;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);
        }
        long long rem=sum-k;
        if(presummap.find(rem)!=presummap.end())
        {
            int len=i-presummap[rem];
            maxlen=max(maxlen,len);

        }
      if(presummap.find(sum)==presummap.end()){
          presummap[sum]=i;
      }
    }
    return maxlen;
}
//optimal for positives and zero
//worstcase TC:O(2N) because outer loop run or O(N)but inner while loop run for small gap 
//sc:O(1)
int largestsubarraywithsumk2(vector<int>a,long long k){
    int left=0;
    int right=0;
    long long sum=a[0];
    int maxlen=0;
    int n=a.size();
    while(right<n){
        while(left<=right && sum>k){
            sum-=a[left];
            left++;
        }if(sum==k){
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        if(right<n)sum+=a[right];
    }
    return maxlen;
}

int main(){

    vector<int>a={1,1,-1,2,3,4,1,1,0,0,1,2};
    vector<int>b={1,1,1,2,3,4,1,1,0,1,2};
    int len=largestsubarraywithsumk(a,5);
    int len2=largestsubarraywithsumk2(b,5);

    cout<<len<<endl;
     cout<<len2;
    return 0;
}
