#include <bits/stdc++.h>
#define INF 2100000000
using namespace std;
int n,a[16][16],d[16][1 << 16];

int TSP(int node, int visit){

    if(visit == (1 << n)-1){
        if(a[node][0])
            return a[node][0];
        return INF;
    }
    if(d[node][visit] != 0)
        return d[node][visit];

    d[node][visit] = INF;

    for(int i=0;i<n;i++){
        if(a[node][i] == 0)
            continue;
        if(visit & (1 << i))
            continue;
        d[node][visit] = min(d[node][visit], a[node][i]+TSP(i,visit | 1 << i));
    }
    return d[node][visit];

}

int main(){
    //freopen("input.txt","r",stdin);
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> a[i][j];
    cout << TSP(0, 1) << "\n";
    return 0;
}
