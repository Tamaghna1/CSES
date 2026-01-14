#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int len=s.length();
    int max=0;
    int count=1;
    for(int i=1;i<len;i++){
        if(s[i]==s[i-1] && s[i-1]=='A')
        count++;
        else
        {
            if(count>max)
            max=count;
            count=1;
        }
    }
    if(count>max)
    max=count;
    count=1;
    for(int i=1;i<len;i++){
        if(s[i]==s[i-1] && s[i-1]=='T')
        count++;
        else
        {
            if(count>max)
            max=count;
            count=1;
        }
    }
    if(count>max)
    max=count;
    count=1;
    for(int i=1;i<len;i++){
        if(s[i]==s[i-1] && s[i-1]=='C')
        count++;
        else
        {
            if(count>max)
            max=count;
            count=1;
        }
    }
    if(count>max)
    max=count;
    count=1;
    for(int i=1;i<len;i++){
        if(s[i]==s[i-1] && s[i-1]=='G')
        count++;
        else
        {
            if(count>max)
            max=count;
            count=1;
        }
    }
    if(count>max)
    max=count;
    cout<<max;
    return 0;
    

}