#include <bits/stdc++.h>
using namespace std;
int n, m, k, a, b, c, q;
int x[501], y[501], dojang[500][500][500],paper[2000][2000];
string s;
int main() {
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n >> m >> k;

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            paper[i][j] = '.';

    for(int i=0;i<k;i++){
        cin >> x[i] >> y[i];
        for(int j=0;j<x[i];j++){
            cin >> s;
            for(int t=0;t<y[i];t++)
                dojang[i][j][t] = s[t];
            }
    }
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> a >> b >> c;
        a--;
        for(int j=b;j<b+x[a];j++)
            for(int t=c;t<c+y[a];t++)
                paper[j][t] = dojang[a][j-b][t-c];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout << (char)paper[i][j];
        cout<<"\n";
    }
    return 0;
}