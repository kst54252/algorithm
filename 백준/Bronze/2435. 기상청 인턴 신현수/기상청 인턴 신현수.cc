#include <bits/stdc++.h>

using namespace std;
int n, k, sm, ans=-2100000000, a[102];
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    for(int i=0;i<k-1;i++){
        cin >> a[i];
        sm += a[i];
    }
    for(int i=k-1;i<n;i++){
        cin >> a[i];
        sm+=a[i];
        ans=max(ans, sm);
        sm-=a[i-k+1];
    }
    cout << ans;
    return 0;
}