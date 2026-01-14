#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector <int> freq(26,0);
    for(char c:s){
        freq[c-'A']++;
    }
    
        int odd_count=0;
        int odd_index=-1;
        for(int i=0;i<26;i++){
            if(freq[i]%2!=0){
                odd_count++;
                odd_index=i;
            }
        }
        if(odd_count>1){
            cout<<"NO SOLUTION"<<endl;
            return 0;
        }
        else{
            string first_half="";
            string middle_char="";
            if (odd_index != -1) {
             middle_char = string(freq[odd_index], 'A' + odd_index);
            }
            for(int i=0;i<26;i++){
                if(i==odd_index) continue;
                first_half+=string(freq[i]/2, 'A'+i);
            }
            
                string second_half=first_half;
                reverse(second_half.begin(),second_half.end());
                cout<<first_half+middle_char+second_half<<endl;
                return 0;
        }
    }