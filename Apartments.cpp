#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> choice(n);
    vector<int> apartment(m);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        choice[i]=a;
    }
    for(int i=0;i<m;i++){
        int b;
        cin>>b;
        apartment[i]=b;
    }
    int p1;
    int p2;
    sort(choice.begin(),choice.end());
    sort(apartment.begin(),apartment.end());
    p1=m-1;
    p2=n-1;
    int count=0;
    while(p1>=0 && p2>=0){
        if(abs(apartment[p1]-choice[p2])<=k){
            count++;
            p1--;
            p2--;
        }
        else if(apartment[p1]>choice[p2]){
            p1--;
        }
        else{
            p2--;
        }
        }
        cout<<count<<endl;
        return 0;
    }
