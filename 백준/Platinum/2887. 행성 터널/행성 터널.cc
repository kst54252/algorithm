#include<bits/stdc++.h>
using namespace std;
int n, x, y, z, ans, parent[100001];
vector<pair<int,int>> vx, vy, vz;
vector<pair<int,pair<int,int>>> v;

int find_root(int a) {
    if (a == parent[a])
        return a;
    return
        find_root(parent[a]);
}
void union_root(int x, int y) {
    x = find_root(x);
    y = find_root(y);

    if (x > y) 
        parent[x] = y;
    else
        parent[y] = x;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x >> y >> z;
        vx.push_back({x,i});
        vy.push_back({y,i});
        vz.push_back({z,i});
    }
    sort(vx.begin(), vx.end());
    sort(vy.begin(), vy.end());
    sort(vz.begin(), vz.end());
    for(int i=1;i<n;i++){
        v.push_back({vx[i].first-vx[i-1].first,{vx[i-1].second,vx[i].second}});
        v.push_back({vy[i].first-vy[i-1].first,{vy[i-1].second,vy[i].second}});
        v.push_back({vz[i].first-vz[i-1].first,{vz[i-1].second,vz[i].second}});
    }
    for(int i=1;i<=n;i++)
        parent[i]=i;

    sort(v.begin(),v.end());

    int vs = v.size();
    
    for(int i=0;i<vs;i++){
        //cout<<v[i].second.first<<" "<<v[i].second.second<<"\n";
        if(find_root(v[i].second.first)!=find_root(v[i].second.second)){
            ans += v[i].first;
            union_root(v[i].second.first,v[i].second.second);
        }
    }
    cout << ans;
    return 0;
}
