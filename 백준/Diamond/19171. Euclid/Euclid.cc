#include <bits/stdc++.h>

using namespace std;
double a[4], b[4], c[4], x, y, z;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    for (int i=0;i<3;i++){
        cin >> a[i] >> b[i] >> c[i];
        x += a[i];
        y += b[i];
        z += c[i];
    }
    x /= 3;
    y /= 3;
    z /= 3;
    for (int i=0;i<100000;i++) {
        double dx = 0, dy = 0, dz = 0, weight_sum = 0;

        for(int j=0;j<3;j++){
            double dist = sqrt((x - a[j]) * (x - a[j]) + (y - b[j]) * (y - b[j]) + (z - c[j]) * (z - c[j]));

            if(dist > 1e-9){
                double w = 1.0 / dist;
                dx += a[j] * w;
                dy += b[j] * w;
                dz += c[j] * w;
                weight_sum += w;
            }
        }

        if(weight_sum > 0){
            x = dx / weight_sum;
            y = dy / weight_sum;
            z = dz / weight_sum;
        }
    }

    cout << fixed << setprecision(6) <<
    sqrt((x - a[0]) * (x - a[0]) + (y - b[0]) * (y - b[0]) + (z - c[0]) * (z - c[0]))+
    sqrt((x - a[1]) * (x - a[1]) + (y - b[1]) * (y - b[1]) + (z - c[1]) * (z - c[1]))+
    sqrt((x - a[2]) * (x - a[2]) + (y - b[2]) * (y - b[2]) + (z - c[2]) * (z - c[2]));
    return 0;
}