#include<bits/stdc++.h>
using namespace std;
map<string, int> m;
int n,nn,cnt;
string a;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> nn;
    for(int i=0;i<n;i++){
        cin >> a;
        m.insert({a,1});
    }

    for(int i=0;i<nn;i++){
        cin >> a;
        if(m.find(a)!=m.end())
            cnt++;
    }
    cout<<cnt;
    return 0;
}
