#include<bits/stdc++.h>
#define INF 2100000000
using namespace std;
struct edge{
    int s, e, l;
};

int n, m, s, e, l, d[202][202];

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            d[i][j]=INF;
    for(int i=1;i<=n;i++)
        d[i][i] = 0;


    vector<edge> edges;
    for(int i=0;i<m;i++){
        cin >> s >> e >> l;
        d[s][e] = min(d[s][e], l);
        d[e][s] = min(d[e][s], l);
        edges.push_back({s, e, l});
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            for(int k=1;k<=n;k++)
                if((d[j][i] != INF) && (d[i][k] != INF))
                    d[j][k] = min(d[j][k], d[j][i] + d[i][k]);
    double ans = INF;
    for (int s=1;s<=n;s++){
        double mx = 0;
        for (struct edge edge : edges) {
            double time = (double)(d[s][edge.s] + d[s][edge.e] + edge.l) / 2.0;
            mx = max(mx, time);
        }
        ans = min(ans, mx);
    }
    cout << fixed << setprecision(1) << ans << "\n";
}