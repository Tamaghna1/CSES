#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long curr_max=arr[0];
    long long final_max=arr[0];
    for(int i=1;i<n;i++){
        curr_max=max(arr[i],curr_max+arr[i]);
        final_max=max(final_max,curr_max);
    }
    cout<<final_max<<endl;
    return 0;
}