#include <bits/stdc++.h>
#define INF 210000000
using namespace std;
int n,m,a,b,c,d[101][101];
int main()
{
    //freopen("input.txt","r",stdin);
    cin >> n;
    cin >> m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(i!=j)
                d[i][j]=INF;


    for(int i=0;i<m;i++){
        cin >> a >> b >> c;
        if(d[a][b]>c)
            d[a][b]=c;
    }


    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            for(int k=1;k<=n;k++)
                if(d[j][k]>d[j][i]+d[i][k])
                    d[j][k] = d[j][i]+d[i][k];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(d[i][j]==INF)
                cout<<"0 ";
            else
                cout<<d[i][j]<<" ";
        }
            cout<<"\n";
    }

    return 0;
}
