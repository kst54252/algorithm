#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
ll n, k, d[4000001]={1,1};
ll f(ll a, ll b){
    if(b==1)return a%mod;
    if(b%2)return f(a,b-1)*a%mod;
    return f(a*a%mod, b/2);
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    for(int i=2;i<=4000000;i++)
        d[i]=d[i-1]*i%mod;
    cin >> n >> k;   
    cout << d[n] *f(d[n-k]*d[k]%mod, mod-2)%mod <<"\n";
}