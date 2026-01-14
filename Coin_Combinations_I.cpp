#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,x;
    cin>>n>>x;
    vector<int> coins;
    for(int i=1;i<=n;i++){
        int c;
        cin>>c;
        coins.push_back(c);
    }
    vector<int> dp(10000001,0);
    dp[0]=1;
    for(int i=1;i<=x;i++){
        for(int k=1;k<=n;k++){
            if(i-coins[k-1]>=0){
                dp[i]=(dp[i]+dp[i-coins[k-1]])%1000000007;
            }
        }
    }
    cout<<(dp[x])%1000000007<<"\n";
    return 0;
}