#include <bits/stdc++.h>

using namespace std;
int n, x, a, t, ans;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n >> x;
    for(int i=0;i<n;i++){
        cin >> a;
        t+=a;
    }
    while(t < (n+ans)*x){
        ans++;
        t+=100;
    }
    cout << ans;
    return 0;
}