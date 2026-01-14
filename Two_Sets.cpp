#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n%4==1 || n%4==2){
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
        vector <int> set1, set2;
        long long target=n*(n+1)/4;
        for(long long i=n;i>=1;i--){
            if(target-i>=0){
                set1.push_back(i);
                target-=i;
            }
            else{
                set2.push_back(i);
            }
        }
        cout<<set1.size()<<endl;
        for(auto val:set1){
            cout<<val<<" ";
        }
        cout<<endl;
        cout<<set2.size()<<endl;
        for(auto val:set2){
            cout<<val<<" ";    

        }
    }
    return 0;
}