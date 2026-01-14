#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,0);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        int temp=i;
        while(temp>0){
            int digit=temp%10;
            if(i-digit>=0 && digit!=0){
                dp[i]= (dp[i]==0) ? dp[i-digit]+1 : min(dp[i],dp[i-digit]+1);
            }
            temp=temp/10;
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}