#include <bits/stdc++.h>

using namespace std;
int n,m,ans=2100000000,a[51][51],b[51][51];
string s[50],ch="BW";

int cnt(int x,int y){
    int c=0;
    for(int i=x;i<=x+7;i++)
        for(int j=y;j<=y+7;j++)
            c+=a[i][j];
    return(c);
}

int main()
{
    //freopen("input.txt","r",stdin);
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
        cin >> s[i];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(s[i-1][j-1]==ch[(i%2+j%2)%2])
                a[i][j]=1;
    for(int i=1;i<=n-7;i++)
        for(int j=1;j<=m-7;j++)
            ans=min(ans,min(64-cnt(i,j),cnt(i,j)));
    printf("%d",ans);


    return 0;
}
