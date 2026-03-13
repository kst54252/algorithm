#include <bits/stdc++.h>

using namespace std;
double a[4], b[4], c[4];
double x, y, z, r = 0.1, ans, cur;
int n, mm;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    n=3;
    for (int i=0;i<n;i++){
        cin >> a[i] >> b[i] >> c[i];
        x += a[i];
        y += b[i];
        z += c[i];
    }
    x /= n;
    y /= n;
    z /= n;
    for (int i=0;i<100000;i++){
        mm = 0;
        ans = 0;
        for(int j=0;j<n;j++){
            cur = sqrt((x - a[j]) * (x - a[j]) + (y - b[j]) * (y - b[j]) + (z - c[j]) * (z - c[j]));
            if(ans < cur){
                ans = cur;
                mm = j;
            }
        }
        x += (a[mm] - x) * r;
        y += (b[mm] - y) * r;
        z += (c[mm] - z) * r;
        r *= 0.999;
    }
    cout << x << " "<<y<<"\n";
    cout << sqrt((x - a[0]) * (x - a[0]) + (y - b[0]) * (y - b[0]) + (z - c[0]) * (z - c[0]))+
    sqrt((x - a[1]) * (x - a[1]) + (y - b[1]) * (y - b[1]) + (z - c[1]) * (z - c[1]))+
    sqrt((x - a[2]) * (x - a[2]) + (y - b[2]) * (y - b[2]) + (z - c[2]) * (z - c[2]));

    return 0;
}