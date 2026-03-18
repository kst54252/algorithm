#include <bits/stdc++.h>
using namespace std;
int a[101],b[101],d[101][10001],minn=2100000000,n,m;
int main()
{
    //freopen("input.txt","r",stdin);
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
        scanf("%d",&b[i]);
    for(int i=1;i<=n;i++)
        for(int j=0;j<=n*100;j++){
            if(j>=b[i])
                d[i][j]=max(d[i-1][j],d[i-1][j-b[i]]+a[i]);
        else
            d[i][j]=d[i-1][j];
            if(d[i][j]>=m)
                minn=min(minn,j);
        }
    printf("%d",minn);
    return 0;
}