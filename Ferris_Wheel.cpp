#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x; cin>>n>>x;
    vector<int> children(n);
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        children[i]=c;
    }
    sort(children.begin(),children.end());
    int count=0;
    int p1=0;
    int p2=n-1;
    while(p1<p2){
        if(children[p1]+children[p2]<=x){
            count++;
            p1++;
            p2--;
        }
        else if(children[p1]+children[p2]>x){
            p2--;
        }
        else{
            p1++;
        }
    }
    cout<<n-count<<endl;
    return 0;
}