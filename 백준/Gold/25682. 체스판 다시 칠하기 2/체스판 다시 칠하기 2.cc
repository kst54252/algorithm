#include<bits/stdc++.h>
using namespace std;
int n,m,k,c, a[2001][2001], b[2001][2001];
string s;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m >> k;
    int cnt = k*k;
    for(int i=1;i<=n;i++){
        cin >> s;
        for(int j=1;j<=m;j++){
            c = s[j-1];
            a[i][j] = a[i][j-1]+a[i-1][j]-a[i-1][j-1];
            b[i][j] = b[i][j-1]+b[i-1][j]-b[i-1][j-1];
            if (!((i+j)%2)){               
                if(c == 'W') a[i][j]++;                
                else b[i][j]++;
            }
            else {                
                if(c == 'B')a[i][j]++;
                else b[i][j]++;
            }
        }
    }
    for (int i=k;i<=n;i++){
        for (int j=k;j<=m;j++){
            int aa = a[i][j]-a[i-k][j]-a[i][j-k]+a[i-k][j-k];            
            int bb = b[i][j]-b[i-k][j]-b[i][j-k]+b[i-k][j-k];
            cnt = min(min(aa, bb), cnt);
        }
    }
    cout << cnt;
}