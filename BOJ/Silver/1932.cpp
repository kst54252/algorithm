#include <bits/stdc++.h>

using namespace std;
int n, ans, a[501][501],d[501][501];
int main()
{
    //freopen("input.txt","r",stdin);
    cin >>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++)
            cin >> a[i][j];

    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++)
            d[i][j]=a[i][j]+max(d[i-1][j-1],d[i-1][j]);

    for(int j=1;j<=n;j++)
        ans = max(ans,d[n][j]);
    cout<<ans;
    return 0;
}
