#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,k;
    cin >> n >> m >> k;
    int ans=(m-1+k-3)%n;
    if(ans<0)
        ans += n;
    cout << ans+1;
    return 0;
}