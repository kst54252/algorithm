#include <bits/stdc++.h>
using namespace std;
int n,a[100],b[100],ans;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        cin >> b[i];
    sort(a,a+n);
    sort(b,b+n,greater<>());
    for(int i=0;i<n;i++)
        ans += a[i]*b[i];
    cout<<ans;
    return 0;
}


