#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map <int,int> customers;
    for(int i=0;i<n;i++){
        int arrival, departure;
        cin>>arrival>>departure;
        customers[arrival]=1;
        customers[departure]=-1;
    }
    int current=0;
    int max=-1;
    for(auto &entry: customers){
        current+=entry.second;
        if(current>max){
            max=current;
        }
    }
    cout<<max<<endl;
    return 0;
}