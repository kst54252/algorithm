#include<bits/stdc++.h>
using namespace std;
int a,b,bb,c,cnt,ans;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> a >> b >> c;
    cout << (a+b-c) <<"\n";
    bb = b;
    while(bb>=10){
        cnt++;
        bb/=10;
    }
    ans=a*pow(10,cnt+1);
    ans+=b;
    ans-=c;
    cout << ans;

    return 0;
}