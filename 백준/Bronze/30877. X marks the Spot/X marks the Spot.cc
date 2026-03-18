#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;
    string s,ss;
    
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s >> ss;
        for(int j=0;j<s.size();j++)
            if(s[j]=='x'||s[j]=='X'){
                if(ss[j]>='a')
                    cout <<char(ss[j]-32);
                else
                    cout << ss[j];
                break;
            }
    }

}