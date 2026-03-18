#include<bits/stdc++.h>
using namespace std;
int n, a, mx = 2, mn = 10000000;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        mx = max(mx, a);
        mn = min(mn, a);
    }
    cout << mx*mn;
    return 0;
}