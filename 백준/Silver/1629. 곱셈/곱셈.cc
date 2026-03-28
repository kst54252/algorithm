#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int arr[2200][2200], cnt[3];
ll f(ll a, ll b, ll c) {
    if(b == 0)
        return 1;

    if(b == 1)
        return a % c;

    ll temp = f(a, b / 2, c);
    
    if(b % 2 == 0) 
        return (temp * temp) % c;

    else 
        return ((temp * temp % c) * (a % c)) % c;
    
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll a, b, c;
    cin >> a >> b >> c;
    cout << f(a, b, c);
    return 0;
}
