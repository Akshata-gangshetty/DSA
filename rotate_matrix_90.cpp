#include<bits/stdc++.h>
using namespace std;
//TC:O(N/2*N/2)+O(N*N/2) SC:O(1)
void rotate_matrix(vector<vector<int>>&mat){
    int n=mat.size();
    for(int i=0;i<n-1;i++){//TC :O(N/2*N/2)
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
       reverse(mat[i].begin(),mat[i].end());//TC:O(N*N/2)
    }
    
}
int main(){
    vector<vector<int>>mat={
        {1,2,3},{4,5,6},{7,8,9}
    };
    rotate_matrix(mat);
    cout<<"Matrix after 90 degree"<<endl;
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
           cout<<mat[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}