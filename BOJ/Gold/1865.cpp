#include <bits/stdc++.h>
#define INF 2100000000
using namespace std;


int tc,n,m,w,s,e,t;


bool f(int n, vector<pair<int,int>> vv[501]){
    vector<int> d(n+1,INF);
    d[1]=0;
    for(int i=0;i<n;i++)
        for(int j=1;j<=n;j++)
            for(int k=0;k<vv[j].size();k++){
                if(d[vv[j][k].first] > d[j]+vv[j][k].second)
                    d[vv[j][k].first]=d[j]+vv[j][k].second;
    }
    for(int j=1;j<=n;j++)
            for(int k=0;k<vv[j].size();k++)
                if(d[vv[j][k].first]>d[j]+vv[j][k].second)
                    return 1;
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt","r",stdin);
    cin >> tc;
    for(int i=0;i<tc;i++){
        vector<pair<int,int>> v[501];
        cin >> n >> m >> w;
        for(int  j=0;j<m;j++){
            cin >> s >> e >> t;
            v[s].push_back({e,t});
            v[e].push_back({s,t});
        }
        for(int  j=0;j<w;j++){
            cin >> s >> e >> t;
            v[s].push_back({e,-t});
        }
        if(f(n,v))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }



    return 0;
}
