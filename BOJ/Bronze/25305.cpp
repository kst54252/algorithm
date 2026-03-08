#include<bits/stdc++.h>
using namespace std;
int n,m,a[10000];
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    cout<<a[n-m];
    return 0;
}
