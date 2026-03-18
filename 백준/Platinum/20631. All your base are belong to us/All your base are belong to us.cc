#include <bits/stdc++.h>

using namespace std;
double a[1001], b[1001], x, y, k, r = 1, ans, cur;
int n, mm;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n >> k;
    for (int i=0;i<n;i++){
        cin >> a[i] >> b[i];
        x += a[i];
        y += b[i];
    }
    x /= n;
    y /= n;

    for (int i=0;i<100000;i++){
        vector<pair<double, int>> dists(n);
        for(int j=0;j<n;j++){
            double d = sqrt((x - a[j]) * (x - a[j]) + (y - b[j]) * (y - b[j]));
            dists[j] = {d, j};
        }
        nth_element(dists.begin(), dists.end() - k, dists.end());

        double dx = 0, dy = 0;
        for(int j=n-k;j<n;j++) {
            double dist = dists[j].first;
            int idx = dists[j].second;
            
            if(dist > 1e-9){
                dx += (a[idx] - x) / dist; 
                dy += (b[idx] - y) / dist;
            }
        }
        x += dx * r;
        y += dy * r;
        r *= 0.999; 
    }
    ans=0;
    vector<double> v(n);

    for(int i=0;i<n;i++)
        v[i] = sqrt((x - a[i]) * (x - a[i]) + (y - b[i]) * (y - b[i]));
        
    sort(v.begin(), v.end());

    for(int i=n-1;i>=n-k;i--)
        ans += v[i];

    cout << fixed << setprecision(5) << ans;

    return 0;
}