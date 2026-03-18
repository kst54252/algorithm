#include <bits/stdc++.h>
using namespace std;

long long n, a[100001], b, minn=2100000000,ans;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin >> n;
    for(int i=0;i<n-1;i++)
        cin >> a[i];
    for(int i=0;i<n-1;i++){
        cin >> b;
        minn=min(minn,b);
        ans += minn*a[i];
    }
    cin >> b;
    cout << ans;
    return 0;
}