#include<bits/stdc++.h>
using namespace std;
int n, a, b, ans, mx=-2000000000;
vector<pair<int,int>>v;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(mx<v[i].first){
            mx=v[i].second;
            ans+=v[i].second-v[i].first;
        }
        else if(mx<v[i].second){
            ans+=v[i].second-mx;
            mx=v[i].second;
        }
    }    
    cout << ans;
}