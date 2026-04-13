#include <bits/stdc++.h>
using namespace std;

struct Shark {
    int size, speed, intel;
};
int n;
vector<vector<int>> adj;
vector<int> d;
bool ch[51];

bool dfs(int x){
    for(int i=0;i<adj[x].size();i++){
        int t = adj[x][i];
        if(ch[t])
            continue;
        ch[t] = 1;

        if(d[t] == 0 || dfs(d[t])){
            d[t] = x;
            return 1;
        }
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);

    cin >> n;
    vector<Shark> sharks(n+1);
    adj.resize(n + 1);
    d.assign(n + 1, 0);

    for(int i=1;i<=n;i++)
        cin >> sharks[i].size >> sharks[i].speed >> sharks[i].intel;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i == j)
                continue;
            
            if(sharks[i].size >= sharks[j].size && sharks[i].speed >= sharks[j].speed && sharks[i].intel >= sharks[j].intel){
                if(sharks[i].size == sharks[j].size && sharks[i].speed == sharks[j].speed && sharks[i].intel == sharks[j].intel && i > j)
                    continue;
                adj[i].push_back(j);
            }
        }
    }

    int match = 0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n;j++)
            ch[j]=0;
        if(dfs(i))
            match++;
        for(int j=0;j<=n;j++)
            ch[j]=0;
        if(dfs(i))
            match++;    
    }
    cout << n - match;

    return 0;
}