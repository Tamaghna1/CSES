#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> coins;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        coins.push_back(c);
    }
   
    vector<int> dp(1000001, INT_MAX);
    dp[0]=0;
    for(int i=1;i<=x;i++){
        for(int k=1;k<=n;k++){
            if (i-coins[k-1]>=0){
                if(dp[i-coins[k-1]]==INT_MAX)
                continue;
                dp[i]=min(dp[i],1+dp[i-coins[k-1]]);
        }
    }
}
    if(dp[x]==INT_MAX)
    cout<<-1<<"\n";
    else
    cout<<dp[x]<<"\n";
    return 0;
}