//Buying and selling stocks with maximum profit
#include<bits/stdc++.h>
using namespace std;
//TC:O(n) and Sc:O(1)
int maxprofit(vector<int>price){
    int mini=price[0];
    int profit=0;
    int n=price.size();
    for (int i = 0; i < n; i++)
    {
        int cost=price[i]-mini;
        profit=max(profit,cost);
        mini=min(mini,price[i]);
        
    }
    return profit;
    
}
int main(){
    vector<int>price={5,1,7,4,3,6};
    int profit=maxprofit(price);
    cout<<profit;
    return 0;

}
