#include<bits/stdc++.h>
using namespace std;

int n, cnt;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=1;i*i<=n;i++)
        cnt++;
    cout << cnt;
    return 0;
}
