#include<bits/stdc++.h>
using namespace std;
int n, b;
string a;
vector<pair<int, string>> v;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        v.push_back({b,a});
    }
    sort(v.begin(), v.end());
    for(int i=v.size()-2;i>=0;i--)
        if(v[i].first!=v[i+1].first){
            cout << v[i+1].second;
            return 0;
            }
    cout << v[0].second;        
    return 0;
}
    