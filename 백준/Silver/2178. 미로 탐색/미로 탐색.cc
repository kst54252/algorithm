#include <bits/stdc++.h>

using namespace std;
int n,m,x,y,cnt;
queue<pair<int,int>>q;
string s;
int ch[101][101],a[102][102],xx[4]={0,1,0,-1},yy[4]={1,0,-1,0};
int main()
{
    //freopen("input.txt","r",stdin);
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        cin>>s;
        for(int j=1;j<=m;j++)
            a[i][j]=s[j-1]-'0';
    }
    ch[1][1]=1;
    q.push({1,1});
    while(1){
        x=q.front().first;
        y=q.front().second;
        q.pop();
        if(x==n&&y==m){
            printf("%d",ch[x][y]);
            return 0;
        }
        for(int i=0;i<4;i++)
            if(a[x+xx[i]][y+yy[i]]&&!ch[x+xx[i]][y+yy[i]]){
                ch[x+xx[i]][y+yy[i]]=ch[x][y]+1;
                q.push({x+xx[i],y+yy[i]});
            }
    }
    return 0;
}
