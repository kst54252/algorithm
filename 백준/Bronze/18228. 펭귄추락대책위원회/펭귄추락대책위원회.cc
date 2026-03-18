#include <bits/stdc++.h>

using namespace std;
int n, a, ans, mn=2100000000;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a;
        if(a == -1){
            ans+=mn;
            mn=2100000000;
        }
        else
            mn=min(mn,a);
    }
    cout << ans+mn;
    return 0;
}