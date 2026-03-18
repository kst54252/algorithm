#include<bits/stdc++.h>
using namespace std;
int n, m, a, b, ch[100002], depth[100002], dp[100002][30];
vector<int> v[100002];
void f(int x, int d){
    ch[x]=1;
    depth[x]=d;
    for(int i=0;i<v[x].size();i++)
        if(!ch[v[x][i]]){
            dp[v[x][i]][0]=x;
            f(v[x][i], d+1);
        }
}        
int lca(int u, int v){
    if(depth[u] < depth[v])
        swap(u, v);
    int diff=depth[u]-depth[v];
    for(int i=0;diff;i++){
        if(diff&1)
            u=dp[u][i];
        diff >>=1;
    }
    if(u==v)
        return u;
    for(int i=29;i>=0;i--)
        if(dp[u][i]!=dp[v][i])
            u=dp[u][i],v=dp[v][i];
            
    return dp[u][0];    
        
}            
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n-1;i++){
        cin >> a >> b;    
        v[a].push_back(b);
        v[b].push_back(a);
    } 
    f(1, 0);
    for(int i=1;i<30;i++)
        for(int j=1;j<=n;j++)
            dp[j][i]=dp[dp[j][i-1]][i-1];
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> a >> b;
        cout << lca(a, b) <<"\n";
    }
    return 0;
}
