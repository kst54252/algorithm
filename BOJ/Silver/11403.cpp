#include <bits/stdc++.h>

using namespace std;
int n,a[101][101],ch[101][101];

void f(int x, int y){
    ch[x][y]=1;
    for(int i=1;i<=n;i++)
        if(a[y][i]&&!ch[x][i])
            f(x,i);
}

int main()
{
    //freopen("input.txt","r",stdin);
    cin >> n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin >> a[i][j];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            if(a[i][j]&&!ch[i][j])
                f(i,j);

    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout<<ch[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
