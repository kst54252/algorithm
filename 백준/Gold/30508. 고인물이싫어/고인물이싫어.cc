#include<bits/stdc++.h>
using namespace std;
int n, m, h, w,k,r,c,ans;
int a[1003][1003], water[1003][1003], ch[1003][1003];
int xx[4]={0,0,1,-1},yy[4]={1,-1,0,0};

void bfs(int x, int y){
    water[x][y] = 1;
    ch[x][y]=1;
    for(int i=0;i<4;i++)
        if(x+xx[i]>=1 && y+yy[i]>=1 && x+xx[i]<=n && y+yy[i]<=m)
            if(!ch[x+xx[i]][y+yy[i]] && a[x][y]<=a[x+xx[i]][y+yy[i]]){
                ch[x+xx[i]][y+yy[i]] = 1;
                bfs(x+xx[i],y+yy[i]); 
            }
}
bool clear(int x, int y){
    int sum = water[x][y];
    sum -= water[x][y-w];
    sum -= water[x-h][y];
    sum += water[x-h][y-w];
    if (sum == w*h)
        return 1;
    return 0;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m >> h >> w;

    for (int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin >> a[i][j];
    cin >> k;
    for(int i=0;i<k;i++){
        cin >> r >> c;
        bfs(r,c);
    }
    for (int i=1;i<=n;i++)
        for(int j=2;j<=m;j++)
            water[i][j]+=water[i][j-1];
    for (int i=2;i<=n;i++)
        for(int j=1;j<=m;j++)
            water[i][j]+=water[i-1][j];

    for (int i=h;i<=n;i++)
        for(int j=w;j<=m;j++)
            if(clear(i,j))
                ans++;
    cout << ans;
}