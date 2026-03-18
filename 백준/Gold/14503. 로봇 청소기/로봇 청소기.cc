#include <bits/stdc++.h>
using namespace std;
int n, m, r, c, d, ans;
int a[54][54], xx[4]={-1,0,1,0}, yy[4]={0, 1, 0, -1};
void f(int x, int y, int dd){
    if(a[x][y] == 0){
        ans++;
        a[x][y]=2;
    }
    for(int i=1;i<=4;i++)
        if(a[x+xx[(dd+4-i)%4]][y+yy[(dd+4-i)%4]] == 0){
            f(x+xx[(dd+4-i)%4], y+yy[(dd+4-i)%4], (dd+4-i)%4);
            return;
        }
    
    if(a[x+xx[(dd+2)%4]][y+yy[(dd+2)%4]] != 1)
        f(x+xx[(dd+2)%4], y+yy[(dd+2)%4],dd);
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    cin >> r >> c >> d;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin >> a[i][j];
    
    f(r+1, c+1, d);
    cout << ans;
    return 0;
}