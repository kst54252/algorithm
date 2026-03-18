#include <bits/stdc++.h>
using namespace std;

int u, n, p, mn = 100001, ans, cnt[10001]; 
string s, f[10001];

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> u >> n;
    for (int i = 0; i < n; i++){
        cin >> s >> p;
        cnt[p]++;
        if(cnt[p] == 1)
            f[p] = s;
    }

    for (int i=1;i<=u;i++) 
        if (cnt[i] > 0 && cnt[i] < mn){
            mn = cnt[i];
            ans = i;
        }

    cout << f[ans] <<" "<< ans << "\n";

    return 0;
}