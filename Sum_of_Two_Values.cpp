#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum;
    cin>>n>>sum;
    map<int,int> m;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        m[i]=arr[i];
    }
    int p1=0;
    int p2=arr.size()-1;
    int val1=-1;
    int val2=-1;
    sort(arr.begin(),arr.end());
    while(p1<p2){
        if(arr[p1]+arr[p2]==sum){
            val1=arr[p1];
            val2=arr[p2];
            break;
        }
        else if(arr[p1]+arr[p2]>sum){
            p2--;
        }
        else{
            p1++;
        }
        }
        if(val1==-1 && val2==-1){
            cout<<"IMPOSSIBLE"<<endl;
            return 0;
        }
        for(auto &entry:m){
            if(entry.second==val1){
                cout<<entry.first+1<<" ";
                entry.second=-1;
                break;
            }
        }
        for(auto &entry:m){
            if(entry.second==val2){
                cout<<entry.first+1<<endl;
                break;
        }
    }
    return 0;
}