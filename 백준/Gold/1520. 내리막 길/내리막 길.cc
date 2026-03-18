#include <bits/stdc++.h>
#define INF 2100000000
using namespace std;
int n,m,a[502][502],ch[501][501],cnt;
int xx[4]={0,0,1,-1},yy[4]={1,-1,0,0};
int f(int x,int y){

    int nx,ny;
    if(x==n&&y==m)
        return 1;
    if(ch[x][y]==-1)
        ch[x][y]=0;
    else
        return ch[x][y];
    for(int i=0;i<4;i++){
        nx=x+xx[i];
        ny=y+yy[i];
        if(a[nx][ny]<a[x][y])
            ch[x][y]+=f(nx,ny);
    }
    return ch[x][y];
}
int main()
{
    //freopen("input.txt","r",stdin);
    scanf("%d %d",&n,&m);
    for(int i=0;i<=n+1;i++)
        for(int j=0;j<=m+1;j++)
            a[i][j]=INF;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
            ch[i][j]=-1;
        }
    f(1,1);
    printf("%d",ch[1][1]);
    return 0;
}
