#include <bits/stdc++.h>
using namespace std;
 
long long n, m, cnt, a[1000001], s[1000001], c[1000001];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m >> a[0];
    s[1] = a[0] % m;
    if(s[1] == 0)
        cnt++;
    c[s[1] % m]++;
    for(int i=1;i<n;i++){
        cin >> a[i];
        s[i+1] = s[i] + a[i];
        s[i+1] %= m;
        if(s[i+1] == 0)
            cnt++;
        c[s[i+1] % m]++;
    }
    for (int i=0;i<m;i++)
        if (c[i] > 1) 
            cnt += c[i]*(c[i]-1)/2;

    cout << cnt;
    return 0;
}