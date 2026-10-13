#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<pair<int,int>>>graph(n);
        for(auto it:edges){
            graph[it[0]].push_back({it[1],it[2]});
            graph[it[1]].push_back({it[0],it[2]});
        }
        int ans=-1;
        int mincount=INT_MAX;
        for(int src=0;src<n;src++){
            vector<int>dist(n,INT_MAX);
             priority_queue<
                pair<int,int>,
                vector<pair<int,int>>,
                greater<pair<int,int>>
            > pq;
            dist[src]=0;
            pq.push({0,src});
            while(!pq.empty()){
                auto [ d,node ]=pq.top();
                pq.pop();
                 if (d > dist[node])
                    continue;
                for(auto it:graph[node]){
                     int next=it.first;
                    int dis=it.second;
                   
                    if(d+dis<=dist[next]){
                        dist[next]=d+dis;
                         pq.push({dist[next], next});
                    }
                    
                }

            }
            int count=0;
            for(int i=0;i<n;i++){
                if(i!=src && dist[i]<=distanceThreshold ){
                    count++;
                }
            }
            if(count<=mincount){
                mincount=count;
                ans=src;
            }
        }
        return ans;

    }
};