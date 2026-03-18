#include <bits/stdc++.h>

using namespace std;
double a[1001], b[1001], x, y, r = 0.1, ans, cur;
int n, mm;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a[i] >> b[i];
        x += a[i];
        y += b[i];
    }
    x /= n;
    y /= n;

    for (int i=0;i<100000;i++){
        mm = 0;
        ans = 0;
        for(int j=0;j<n;j++){
            cur = sqrt((x - a[j]) * (x - a[j]) + (y - b[j]) * (y - b[j]));
            if(ans < cur){
                ans = cur;
                mm = j;
            }
        }
        x += (a[mm] - x) * r;
        y += (b[mm] - y) * r;
        r *= 0.999;
    }
    if (abs(x) < 1e-9) x = 0.0;
    if (abs(y) < 1e-9) y = 0.0;
    cout << fixed;
    cout.precision(3);
    cout << x+0.0 << " " << y+0.0 << "\n" << ans;

    return 0;
}