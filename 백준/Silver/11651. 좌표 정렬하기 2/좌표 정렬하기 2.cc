#include<bits/stdc++.h>
using namespace std;
bool com(pair<int,int>p, pair<int,int>q){
    if(p.second==q.second)
        return p.first < q.first;
    else
        return p.second < q.second;
}
vector<pair<int,int>> v;
int n,x,y;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),com);
    for(int i=0;i<n;i++)
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    return 0;
}
