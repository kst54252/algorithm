#include <bits/stdc++.h>

using namespace std;
int n, m, x, y,c,cc;
int xx[4]={0,0,1,-1},yy[4]={1,-1,0,0}, a[1002][1002];
queue<pair<int,int>>q;
int main()
{
    //freopen("input.txt","r",stdin);


    cin >> m >> n;
    for(int i=0;i<=n+1;i++)
        for(int j=0;j<=m+1;j++)
            a[i][j] = -1;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){

            scanf("%d",&a[i][j]);

            if(a[i][j]==1){
                q.push({i,j});
                c++;
            }
            else if(a[i][j]==-1)
                cc++;
        }

    while(!q.empty()){

        x=q.front().first;
        y=q.front().second;

        for(int i=0;i<4;i++)
            if(a[x+xx[i]][y+yy[i]] == 0){
                a[x+xx[i]][y+yy[i]] = a[x][y]+1;
                q.push({x+xx[i],y+yy[i]});
                c++;
            }
        q.pop();

    }
    if(c+cc!=n*m)
        printf("-1");
    else
        printf("%d",a[x][y]-1);

    return 0;
}
