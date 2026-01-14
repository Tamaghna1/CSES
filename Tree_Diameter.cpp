#include <bits/stdc++.h>
using namespace std;
const int MAX=1e6+5;
vector <int> adj[MAX];
int farthest_node;
int max_distance;
void dfs(int node, int parent, int distance){
    if(distance> max_distance){
        max_distance=distance;
        farthest_node=node;
    }
    for(auto neighbour : adj[node]){
        if(neighbour!=parent){
            dfs(neighbour, node, distance+1);
        }
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    max_distance=-1;
    dfs(1,0,0);
    max_distance=-1;
    dfs(farthest_node,0,0);
    cout<<max_distance<<endl;
    return 0;
    
}