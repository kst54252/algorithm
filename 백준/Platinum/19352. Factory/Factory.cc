#include <bits/stdc++.h>

using namespace std;
double a[1001], b[1001], x, y ,ans;
int n, nn;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> nn;
    for(int ii=0;ii<nn;ii++){
        cin >> n;
        x=0;y=0;ans=0;
        for (int i=0;i<n;i++){
            cin >> a[i] >> b[i];
            x += a[i];
            y += b[i];
        }
        x /= n;
        y /= n;
        for (int i=0;i<10000;i++) {
            double dx = 0, dy = 0, weight_sum = 0;

            for(int j=0;j<n;j++){
                double dist = sqrt((x - a[j]) * (x - a[j]) + (y - b[j]) * (y - b[j]));

                if(dist > 1e-9){
                    double w = 1.0 / dist;
                    dx += a[j] * w;
                    dy += b[j] * w;
                    weight_sum += w;
                }
            }

            if(weight_sum > 0){
                x = dx / weight_sum;
                y = dy / weight_sum;
            }
        }
        cout << fixed << setprecision(6) << x << " " << y << "\n";
    }
    return 0;
}