#include <bits/stdc++.h>
using namespace std;


int main() {
    
    long long n, a, ans=0;
    cin >> n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            cin >> a;
            ans += a;
        }
    cout << ans;
    return 0;
}