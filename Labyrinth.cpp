#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
char dir[]={'R','L','D','U'};
int main(){
    int n,m;
    cin>>n>>m;
    pair<int,int> start,end;
    vector<string> grid(n);
    for(int i=0;i<n;i++){
        cin>>grid[i];
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='A'){
                start={i,j};
            }
            if(grid[i][j]=='B'){
                end={i,j};
            }
            }
        }
        vector <vector<int>> path(n,vector<int>(m,-1));
        queue <pair<int,int>> q;
        q.push(start);
        path[start.first][start.second]=-2;
        bool found=false;
        while(!q.empty()){
            auto curr=q.front();
            q.pop();
            if(curr==end){
                found=true;
                break;
            }
            for(int i=0;i<4;i++){
                int new_x=curr.first+dx[i];
                int new_y=curr.second+dy[i];
                if(new_x>=0 && new_x<n && new_y>=0 && new_y<m && grid[new_x][new_y]!='#' && path[new_x][new_y]==-1){
                    path[new_x][new_y]=i;
                    q.push({new_x,new_y});
                }
            }
        }
         if(found){
                cout<<"YES"<<endl;
                string result="";
                pair<int,int> curr=end;
                while(curr!=start){
                    int direction=path[curr.first][curr.second];
                    result+=dir[direction];
                    curr={curr.first-dx[direction], curr.second-dy[direction]};
                }
                reverse(result.begin(),result.end());
                cout<<result.length()<<endl;
                cout<<result<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
                return 0;
        }

