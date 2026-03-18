#include <bits/stdc++.h>

using namespace std;
double a[5001], b[5001], c[5001];
double x, y, z, xx, yy, zz, r = 0.1, ans, cur,realans=2100000000;
int n, mm;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a[i] >> b[i] >> c[i];
        xx += a[i];
        yy += b[i];
        zz += c[i];
    }
    xx /= n;
    yy /= n;
    zz /= n;
    x=xx;y=yy;z=zz;

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
    realans=min(ans,realans);

    x=xx;y=yy;z=zz;r=0.1;
    for (int i=0;i<100000;i++){
        mm = 0;
        ans = 0;
        for(int j=0;j<n;j++){
            cur = sqrt((x - a[j]) * (x - a[j]) + (z - c[j]) * (z - c[j]));
            if(ans < cur){
                ans = cur;
                mm = j;
            }
        }
        x += (a[mm] - x) * r;
        z += (c[mm] - z) * r;
        r *= 0.999;
    }
    realans=min(ans,realans);
    x=xx;y=yy;z=zz;r=0.1;
    for (int i=0;i<100000;i++){
        mm = 0;
        ans = 0;
        for(int j=0;j<n;j++){
            cur = sqrt((z - c[j]) * (z - c[j]) + (y - b[j]) * (y - b[j]));
            if(ans < cur){
                ans = cur;
                mm = j;
            }
        }
        z += (c[mm] - z) * r;
        y += (b[mm] - y) * r;
        r *= 0.999;
    }
    realans=min(ans,realans);
    cout << realans*2;
    return 0;
}