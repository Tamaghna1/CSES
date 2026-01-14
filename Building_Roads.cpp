#include <bits/stdc++.h>
using namespace std;
const int MAXN=100005;
vector<int> adj[MAXN];
bool visited[MAXN];
void dfs(int node){
    visited[node]=true;
    for(int neighbour: adj[node]){
        if(!visited[neighbour]){
            visited[neighbour]=true;
            dfs(neighbour);
        }
    }
}
    int main(){
        int n,m;
        cin>>n>>m;
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> representative;
        for(int i=1;i<=n;i++){
            if(!visited[i]){
                representative.push_back(i);
                dfs(i);
            }
        }
        cout<<representative.size()-1<<endl;
        for(int i=0;i<representative.size()-1;i++){
            cout<<representative[i]<<" "<<representative[i+1]<<endl;
        }
    }