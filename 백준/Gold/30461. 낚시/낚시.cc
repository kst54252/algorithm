#include<bits/stdc++.h>
using namespace std;
int n,m,q,x,y,cnt,a[2002][2002];
string st="Yes";
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m >> q;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            cin >> x;
            a[i][j] = a[i-1][j]+x;
        }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            a[i][j]+=a[i-1][j-1];
    for(int i=0;i<q;i++){
        cin >> x >> y;
        cout<<a[x][y]<<"\n";
    }
    return 0;
}