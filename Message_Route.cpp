#include <bits/stdc++.h>
using namespace std;
const int MAX=1e5+5;
vector <int> adjacency[MAX];
int parent[MAX];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adjacency[u].push_back(v);
        adjacency[v].push_back(u);
    }
    queue <int> q;
    q.push(1);
    parent[1]=-1;
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        if (curr==n){
            break;
        }
        for(auto neighbour: adjacency[curr]){
            if(parent[neighbour]==0 && neighbour!=1){
                parent[neighbour]=curr;
                q.push(neighbour);
            }
        }
    }
    if(parent[n]==0){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        vector<int> path;
        int count=0;
        int curr=n;
        while(curr!=-1){
            path.push_back(curr);
            curr=parent[curr];
            count++;
        }
        reverse(path.begin(),path.end());
        cout<<count<<endl;
        for(auto node:path){
            cout<<node<<" ";
        }
    }
    return 0;
    }
