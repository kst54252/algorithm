#include <bits/stdc++.h>

using namespace std;
int n,m,a,b,cnt,ans,ch[501];
vector<int>v[501],v1[501];
void f(int x){
    cnt++;
    ch[x]=1;
    for(int i=0;i<v[x].size();i++)
        if(!ch[v[x][i]])
            f(v[x][i]);
}
void f1(int x){
    cnt++;
    ch[x]=1;
    for(int i=0;i<v1[x].size();i++)
        if(!ch[v1[x][i]])
        f1(v1[x][i]);
}
int main()
{
   // freopen("input.txt","r",stdin);
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        v[a].push_back(b);
        v1[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=500;j++)
            ch[j]=0;
        cnt=0;
        f(i);
        f1(i);
        if(cnt==n+1)
            ans++;
    }
    printf("%d",ans);
    return 0;
}
