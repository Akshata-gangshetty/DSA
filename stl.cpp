#include<bits/stdc++.h>
using namespace std;
/*int main(){
    pair<int,int>p[]={{1,4},{3,2}};
    cout<<p[1].first<<" "<<p[0].first;
    return 0;
}*/
int main(){

    vector<int>numbers={10,20,30,40,58};
   for(auto it=numbers.begin();it !=numbers.end();it++){
    cout<<*(it)<<" "<<endl;
}
vector<int>copy(2,6);
numbers.insert(numbers.begin(),copy.begin(),copy.end());
numbers.erase(numbers.begin()+1,numbers.begin()+2);
numbers.insert(numbers.begin(),500);
for(auto it=numbers.begin();it !=numbers.end();it++){
    cout<<*(it)<<" "<<endl;
}

    return 0;
    
}