#include<bits/stdc++.h>
using namespace std;
int n, a[52][52], ch[52][52], chk[52][52], cnt;
int xx[4] = {0,0,1,-1}, yy[4] = {1,-1,0,0};
void f(int x, int y, int c){
    int nx, ny;
    for(int i=0;i<4;i++){
        nx=x+xx[i];ny=y+yy[i];
        if(nx>=1&&ny>=1&&nx<=n&&ny<=n)
            if(ch[nx][ny]==0 && chk[c][a[nx][ny]] == 0){
                chk[c][a[nx][ny]] = 1;
                ch[nx][ny] = c;
                f(nx, ny, c);
            }    
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin >> a[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(ch[i][j] == 0){
                cnt++;
                ch[i][j]=cnt;
                chk[cnt][a[i][j]] = 1;
                f(i, j, cnt);
            }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout << ch[i][j] <<" ";
        cout <<"\n";
    }
}