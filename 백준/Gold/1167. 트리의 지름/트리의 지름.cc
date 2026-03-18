#include <bits/stdc++.h>

using namespace std;
int n,a,b,c,ans,m,ch[100001];
vector<pair<int,int>>v[100001];
void dfs(int node, int dist)
{
    if(ch[node])
        return;

    if(ans < dist){
        ans = dist;
        m = node;
    }

    ch[node]=1;

    for(int i=0;i<v[node].size();i++){
        int nextDist = v[node][i].second;
        dfs(v[node][i].first, v[node][i].second+dist);
    }
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        while(1){
            scanf("%d",&b);
            if(b == -1)
                break;
            scanf("%d",&c);
            v[a].push_back({b,c});
        }

    }
    dfs(1,0);
    for(int i=0;i<=n;i++)
        ch[i]=0;
    dfs(m,0);
    printf("%d",ans);
    return 0;
}
