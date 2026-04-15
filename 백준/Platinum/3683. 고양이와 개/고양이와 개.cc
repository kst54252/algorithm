#include <bits/stdc++.h>
using namespace std;

struct Viewer { 
    string like, dislike; 
};

vector<vector<int>> adj;
vector<int> match;
vector<bool> visited;

bool dfs(int u){
    for(int v:adj[u]){
        if(visited[v]) continue;
        visited[v]=1;
        if(match[v]==-1||dfs(match[v])){
            match[v]=u;
            return 1;
        }
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int c,d,v; cin >> c >> d >> v;
        vector<Viewer> cat,dog;
        for(int i=0;i<v;i++){
            string l,r; cin >> l >> r;
            if(l[0]=='C')
                cat.push_back({l,r});
            else
                dog.push_back({l,r});
        }
        int n=cat.size(), m=dog.size();
        adj.assign(n,{});
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(cat[i].like == dog[j].dislike || cat[i].dislike == dog[j].like)
                    adj[i].push_back(j);
        match.assign(m,-1);
        int ans = 0;
        for(int i=0;i<n;i++){
            visited.assign(m, 0);
            if(dfs(i))
                ans++;
        }
        cout << v-ans << "\n";
    }
    return 0;
}
