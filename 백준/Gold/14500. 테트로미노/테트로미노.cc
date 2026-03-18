#include <bits/stdc++.h>

using namespace std;
int n,m,ans,a[501][501],ch[501][501];
int xx[4]={0,0,1,-1},yy[4]={1,-1,0,0};
void f(int x, int y, int val, int cnt){
    if(cnt==4)
        ans=max(ans,val);
    else
        for(int i=0;i<4;i++)
            if(x+xx[i]>0&&y+yy[i]>0&&x+xx[i]<=n&&y+yy[i]<=m)
                if(!ch[x+xx[i]][y+yy[i]]){
                    ch[x+xx[i]][y+yy[i]]=1;
                    f(x+xx[i],y+yy[i],val+a[x+xx[i]][y+yy[i]],cnt+1);
                    ch[x+xx[i]][y+yy[i]]=0;
                }

}

int main()
{
    //freopen("input.txt","r",stdin);
    cin >> n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
            if(i>=2&&j>=3){
                ans=max(ans,a[i-1][j]+a[i-1][j-1]+a[i-1][j-2]+a[i][j-1]);
                ans=max(ans,a[i][j]+a[i][j-1]+a[i][j-2]+a[i-1][j-1]);
            }
            if(i>=3&&j>=2){
                ans=max(ans,a[i][j]+a[i-1][j]+a[i-2][j]+a[i-1][j-1]);
                ans=max(ans,a[i][j-1]+a[i-1][j-1]+a[i-2][j-1]+a[i-1][j]);
            }
        }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            ch[i][j]=1;
            f(i,j,a[i][j],1);
            ch[i][j]=0;
        }
    cout<<ans;
    return 0;
}
