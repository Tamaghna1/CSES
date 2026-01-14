#include <bits/stdc++.h>
using namespace std;
const int MAX=1e6+5;
vector <int> adjacency[MAX];
vector <int> sub(MAX);
void dfs(int n){
    sub[n]=1;
    for(auto child: adjacency[n]){
        dfs(child);
        sub[n]+=sub[child];
    }

}
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        int supervisor;
        cin>>supervisor;
        adjacency[supervisor].push_back(i);
    }
    dfs(1);
    for(int i=1;i<=n;i++){
        cout<<sub[i]-1<<" ";
    }
    return 0;

}