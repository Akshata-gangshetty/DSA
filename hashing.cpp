#include<bits/stdc++.h>
using namespace std;/*if(issubset(a,b)){
        cout<<"true"<<endl;
bool issubset(vector<int>&a,vector<int>&b){
    int m=a.size(),n=b.size();
    for(int i=0;i<n;i++)
    {
        bool found=false;
    
    for(int j=0;j<m;j++){
        if (b[i]==a[j]){
            found=true;
            a[j]=-1;
            break;
    }
}
if(!found)return false;
}return true;
}

int main()
{
    vector<int>a={11,3,4,5,21,6};
     vector<int>b={11,3,4,1};
     if(issubset(a,b)){
        cout<<"true"<<endl;}
    else{
        cout<<"false"<<endl;
     }
     return 0;
    


}
bool issubset(vector<int>&a,vector<int>b){
    multiset<int>hashset(a.begin(),a.end());
    for(int num:b){
        if(hashset.find(num)==hashset.end()){
            return false;

        }
        hashset.erase(hashset.find(num));
    }
    return true;
}
int main(){
    vector<int>a={1,2,3,4,5};
    vector<int>b={1,2,5};
    if(issubset(a,b)){
        cout<<"true"<<endl;}
    else{
        cout<<"false"<<endl;
     }
     return 0;

}
//disjoint
bool aredisjoint(vector<int>&a,vector<int>&b){
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            if(a[i]==b[j])
                return false;
            
        }
    }
        return true;

    }
    int main(){
        vector<int>a={1,2,3,5,6};
        vector<int>b={11,62,63,55};
         if(aredisjoint(a,b)){
        cout<<"true"<<endl;}
    else{
        cout<<"false"<<endl;
     }
     return 0;


    }*/

