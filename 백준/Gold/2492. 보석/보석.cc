#include <bits/stdc++.h>

using namespace std;
int n,m,t,kk,a,b,ch[1000001];
int x,y,ans=-1;
pair<int,int>p[101];
vector<int> v;
int main()
{
    //freopen("input.txt","r",stdin);
    scanf("%d %d %d %d",&n,&m,&t,&kk);
    v.push_back(0);
    for(int i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        p[i]={a,b};
        if(!ch[a]){
            v.push_back(a);
            ch[a]=1;
        }
        if(!ch[b]){
            v.push_back(b);
            ch[b]=1;
        }
        if(a>=kk)
        if(!ch[a-kk]){
            v.push_back(a-kk);
            ch[a-kk]=1;
        }
        if(b>=kk)
        if(!ch[b-kk]){
            v.push_back(b-kk);
            ch[b-kk]=1;
        }
    }
    for(int i=0;i<v.size();i++)
        for(int j=0;j<v.size();j++){
            int cnt=0;
            for(int k=0;k<t;k++){
                int xx=p[k].first,yy=p[k].second;
                if(v[i]<=xx&&xx<=v[i]+kk&&v[j]<=yy&&yy<=v[j]+kk)
                    cnt++;
            }
                if(cnt>ans&&v[i]+kk<=n&&v[j]+kk<=m){
                    ans=cnt;
                    x=v[i];
                    y=v[j];
                }
    }
    printf("%d %d\n%d",x,y+kk,ans);
    return 0;
}
