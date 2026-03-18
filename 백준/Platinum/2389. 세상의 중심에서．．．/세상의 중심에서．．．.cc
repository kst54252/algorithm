#include <bits/stdc++.h>

using namespace std;
double a[101], b[101], x, y, r = 0.1, ans, cur;
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

    cout << x << " " << y << " " << ans;

    return 0;
}