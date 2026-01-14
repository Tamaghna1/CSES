#include <bits/stdc++.h>
using namespace std;
int main(){
    const long long v= 1e9+7;
    int n;
    cin>>n;
    vector <int> dp(n+1,0);
    dp[0] = 1; // Base case: one way to achieve a sum of 0
    for(int i=1;i<=n;i++){
        for(int k=1;k<=6;k++){
            if(i-k>=0){
                dp[i]=(dp[i]+dp[i-k])%v;
            }
        }
    }
    cout << dp[n] << "\n";
    return 0;
            }
