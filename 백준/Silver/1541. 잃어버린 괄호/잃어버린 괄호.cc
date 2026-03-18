#include <bits/stdc++.h>
using namespace std;
int sw=1,ans,num;
string s;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='-'||s[i]=='+'){
            ans+=num*sw;
            num=0;
            if(s[i]=='-')
            sw=-1;
        }
        else
            num=num*10+s[i]-'0';
    }
    cout << ans+(num*sw);
    return 0;
}




