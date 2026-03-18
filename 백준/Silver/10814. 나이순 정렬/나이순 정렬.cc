#include<bits/stdc++.h>
using namespace std;
vector<pair<int,string>> v;
int n,x;
string y;
bool com(pair<int,string>p, pair<int,string>q){
    if(p.first==q.first)
        return 0;
    return p.first < q.first;
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        v.push_back({x,y});
    }
    stable_sort(v.begin(),v.end(),com);
    for(int i=0;i<n;i++)
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    return 0;
}
