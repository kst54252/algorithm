#include <bits/stdc++.h>
using namespace std;
int v, e, a, b, id;
int d[10001];
bool ch[10001];
stack<int> s;
vector<int> V[10001];
vector<vector<int>> scc;
int dfs(int x){
    d[x] = ++id;
    s.push(x);
    int parent = d[x];
    for(int i=0;i< V[x].size();i++){
        int y = V[x][i];
        if(d[y] == 0)
            parent = min(parent, dfs(y));
        else if(!ch[y])
            parent = min(parent, d[y]);
    }
    if(parent == d[x]){
        vector<int> sc;
        while(1){
            int t = s.top();
            s.pop();
            sc.push_back(t);
            ch[t]=1;
            if(t==x)
                break;
        }
        sort(sc.begin(), sc.end());
        scc.push_back(sc);
    }
    return parent;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> v >> e;
    for(int i=0;i<e;i++){
        cin >> a >> b;
        V[a].push_back(b);
    }
    for(int i=1;i<=v;i++)
        if(d[i] == 0)
            dfs(i);
    cout << scc.size() <<"\n";
    sort(scc.begin(), scc.end());
    for(int i=0;i<scc.size();i++){
        for(int j=0;j<scc[i].size();j++)
            cout << scc[i][j]<<" ";
        cout << "-1\n";    
    }
    return 0;
}