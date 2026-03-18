#include <bits/stdc++.h>

using namespace std;
int n, m,h,z, x, y,c,cc;
int xx[6]={0,0,1,-1,0,0},yy[6]={1,-1,0,0,0,0},zz[6]={0,0,0,0,1,-1}, a[102][102][102];

struct TMT{
    int z,x,y;
};
queue<TMT>q;
int main()
{
    //freopen("input.txt","r",stdin);


    cin >> m >> n >> h;
    for(int k=0;k<=h+1;k++)
        for(int i=0;i<=n+1;i++)
            for(int j=0;j<=m+1;j++)
                a[k][i][j] = -1;

    for(int k=1;k<=h;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++){
                scanf("%d",&a[k][i][j]);

                if(a[k][i][j]==1){
                    q.push({k,i,j});

                    c++;
                }
                else if(a[k][i][j]==-1)
                    cc++;
            }

    while(!q.empty()){


        x=q.front().x;
        y=q.front().y;
        z=q.front().z;

        for(int i=0;i<6;i++)
            if(a[z+zz[i]][x+xx[i]][y+yy[i]] == 0){
                a[z+zz[i]][x+xx[i]][y+yy[i]] = a[z][x][y]+1;
                q.push({z+zz[i],x+xx[i],y+yy[i]});
                c++;
            }
        q.pop();

    }
    if(c+cc!=n*m*h)
        printf("-1");
    else
        printf("%d",a[z][x][y]-1);

    return 0;
}
