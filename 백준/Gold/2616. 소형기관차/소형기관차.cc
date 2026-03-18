#include <bits/stdc++.h>

using namespace std;
int n,m,a[50001],sum[50001],d[4][50001];
int main()
{
    //freopen("input.txt","r",stdin);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&m);
    for(int i=1;i<=n;i++)
        sum[i]=sum[i-1]+a[i];

    for(int i=1;i<=3;i++)
        for(int j=m*i;j<=n;j++)
            d[i][j]=max(d[i][j-1],d[i-1][j-m]+sum[j]-sum[j-m]);

    printf("%d",d[3][n]);
    return 0;
}
