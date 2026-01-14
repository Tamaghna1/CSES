#include <bits/stdc++.h>
using namespace std;
const int MAX=100005;
vector <int> adjacency[MAX];
    int main(){
        int n,m;
        cin>>n>>m;
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            adjacency[u].push_back(v);
            adjacency[v].push_back(u);
        }
        vector <int> group(n+1,0);
        for(int i=1;i<=n;i++){
            if(group[i]==0){
                group[i]=1;
                queue <int> q;
                q.push(i);
                while(!q.empty()){
                    int curr=q.front();
                    q.pop();
                    for(auto neighbour : adjacency[curr]){
                        if(group[neighbour]==0){
                            group[neighbour]= group[curr]==1 ? 2:1;
                            q.push(neighbour);
                        }
                        else if(group[neighbour]==group[curr]){
                            cout<<"IMPOSSIBLE"<<endl;
                            return 0;
                        }
                    }
                }
            }
        }
        for(int i=1;i<=n;i++){
            cout<<group[i]<<" ";
        }
        return 0;
    }
