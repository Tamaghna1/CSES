#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector <long long> num(n);
    for(long long i=0;i<n;i++){
        long long m;
        cin>>m;
        num[i]=m;
    }
    if(n==1){
        cout<<0<<endl;
        return 0;
    }
    else
    {
        long long count=0;
        for(long long i=1;i<n;i++){
            if(num[i]<num[i-1])
            {
                count+=num[i-1]-num[i];
                num[i]=num[i-1];
            }
        }
        cout<<count<<endl;
        return 0;
    }
}