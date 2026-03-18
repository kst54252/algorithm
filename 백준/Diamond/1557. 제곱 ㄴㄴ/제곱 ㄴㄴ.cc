#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll p[1000002]={0,1};
ll f(ll n){
    ll cnt=0;
    for(ll i=1;i*i<=n;i++)
        cnt+=p[i]*(n/(i*i));
    return cnt;
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    for(int i=1;i<=1000000;i++)
        for(int j=2*i;j<=1000000;j+=i)
            p[j] -= p[i];
    ll n;
    cin >> n;
    ll L=n-1, R=n*2, m, c;
    while(L < R-1) {
        m = (L + R)/2;
        c = f(m);   
        if(c < n) L = m;
        else R = m;
    }
    cout << R;
    return 0;
}