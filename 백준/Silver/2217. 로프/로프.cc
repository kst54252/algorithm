#include <bits/stdc++.h>
using namespace std;
long long n, ans, a[100001];

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a, a+n, greater<int>());
    for(int i=0;i<n;i++)
        ans = max(ans, (i+1)*a[i]);
        
    cout << ans;
    return 0;
}