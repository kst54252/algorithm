#include <bits/stdc++.h>

using namespace std;
int a,b,c,n,start,en,ch[1000001];
vector<pair<int,int> > v[1000001];
void f(int s,int e,int ans,int m){

    if(s==e)
        printf("%d",ans-m);
    else{
        for(int i=0;i<v[s].size();i++)
            if(!ch[v[s][i].first]){
                ch[v[s][i].first]=1;
                int mx=max(m,v[s][i].second);
                f(v[s][i].first,e,ans+v[s][i].second,mx);
            }
    }

}
int main()
{
    //freopen("input.txt","r",stdin);
    scanf("%d %d %d",&n,&start,&en);
    for(int i=0;i<n-1;i++){
        scanf("%d %d %d",&a,&b,&c);
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }
    ch[start]=1;
    f(start,en,0,0);
    return 0;
}
