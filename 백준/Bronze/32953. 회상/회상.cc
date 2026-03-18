#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m, k, ans;
map<string, int> mp;
string s;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> k;
        for(int i=0;i<k;i++){
            cin >> s;
            if(mp.find(s) != mp.end()){
                mp[s]++;
            }
            else
                mp.insert({s, 1});
        }
    }
     for (const auto& pair : mp)
        if(pair.second >= m)
            ans++;
    
   cout << ans;
    return 0;
}