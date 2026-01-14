#include <bits/stdc++.h>
using namespace std;
const int MAX=1e6+5;
vector <int> adjacency[MAX];
vector <int> match(MAX,-1);
int c=0;
void dfs(int n, int p){
    for(auto neighbour: adjacency[n]){
        if(neighbour==p) continue;
        dfs(neighbour, n);
        if(match[n]==-1 && match[neighbour]==-1){
            match[n]=neighbour;
            match[neighbour]=n;
            c++;
        }
        
    }
    
}        
    int main(){
        int n;
        cin>>n;
        for(int i=0;i<n-1;i++){
            int u,v;
            cin>>u>>v;
            adjacency[u].push_back(v);
            adjacency[v].push_back(u);
        }
        dfs(1,0);
        cout<<c<<endl;
        return 0;
    }
