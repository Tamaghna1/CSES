#include <bits/stdc++.h>
using namespace std;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
void dfs(int start_x, int start_y, int n, int m, vector<string> &grid)
{
    queue <pair<int,int>> q;
    q.push({start_x, start_y});
    grid[start_x][start_y]='#';
    while(!q.empty()){
        auto curr=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            auto new_x=curr.first+dx[i];
            auto new_y=curr.second+dy[i];
            if(new_x>=0 && new_x<n && new_y>=0 && new_y<m && grid[new_x][new_y]=='.'){
                grid[new_x][new_y]='#';
                q.push({new_x,new_y});
            }
        }
    }

}
int main(){
    int n;
    int m;
    cin>>n>>m;
    vector<string> grid(n);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        grid[i]=s;
    }
    int room_count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='.'){
                room_count++;
                dfs(i,j,n,m,grid);
            }
        }
    }
    cout<<room_count<<endl;
    return 0;
}