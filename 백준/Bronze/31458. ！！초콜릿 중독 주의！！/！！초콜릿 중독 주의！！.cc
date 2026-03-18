#include<bits/stdc++.h>
using namespace std;
int a,b,c,n;
long long ans;
string s;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        c=0;
        for(c=0;s[c]=='!';c++);
        a=c;
        b=s.size()-c-1;
        ans=s[c]-'0';
        if(b>0)
            ans=1;

        if(a%2==1)
            ans=(ans+1)%2;
        cout << ans << "\n";
    }
}