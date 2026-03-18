#include <bits/stdc++.h>

using namespace std;
int n,a[1001][3],d[1001][3];
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<n;i++){
        d[i][0]=a[i][0]+min(d[i-1][1],d[i-1][2]);
        d[i][1]=a[i][1]+min(d[i-1][0],d[i-1][2]);
        d[i][2]=a[i][2]+min(d[i-1][1],d[i-1][0]);
    }
    printf("%d",min(d[n-1][0],min(d[n-1][1],d[n-1][2])));
    return 0;
}
