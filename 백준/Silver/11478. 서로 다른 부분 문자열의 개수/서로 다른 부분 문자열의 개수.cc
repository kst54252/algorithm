#include<bits/stdc++.h>
using namespace std;
map<string,int> m;
string s,ss;
int n, cnt=1;
vector<string>v;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> s;
    n = s.size();
    for(int i=1;i<=n;i++)
        for(int j=0;j<=n-i;j++)
            v.push_back(s.substr(j, i));
    sort(v.begin(),v.end());
    for(int i=1;i<v.size();i++)
        if(v[i]!=v[i-1])
            cnt++;
    cout << cnt;
    return 0;
}
