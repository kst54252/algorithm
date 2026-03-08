#include<bits/stdc++.h>
using namespace std;
int a,b,c,n;
int main() {
    cin >> a >> b >> c >> n;
    if (a * n + b <= c * n && a <= c)
        cout << 1;
    else cout << 0;

    return 0;
}
