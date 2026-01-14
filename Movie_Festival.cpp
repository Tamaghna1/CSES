#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <pair<int,int>> movies(n);
    for(int i=0;i<n;i++){
        cin>>movies[i].second>>movies[i].first;
    }
    sort(movies.begin(),movies.end());
    int count=0;
    int end_time=0;
    for(int i=0;i<n;i++){
        if(movies[i].second>=end_time){
            count++;
            end_time=movies[i].first;
        }
    }
    cout<<count<<endl;
    return 0;

}