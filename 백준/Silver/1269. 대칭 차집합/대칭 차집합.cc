#include<bits/stdc++.h>
using namespace std;
map<int,int> m;
int a,n,nn,cnt;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> nn;
    for(int i=0;i<n+nn;i++){
        cin >> a;
        if(m.find(a)!=m.end())
            m[a]++;
        else
            m.insert({a,1});
    }
    for (auto iter = m.begin() ; iter !=  m.end(); iter++)
        if(iter->second == 1)
            cnt++;
    cout<<cnt;
    return 0;
}
