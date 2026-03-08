#include<bits/stdc++.h>
using namespace std;
map<string,int> m;
int n,nn;
string a;
vector<string>v;
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
        if(iter->second == 2)
            v.push_back(iter->first);
    sort(v.begin(), v.end());
    cout<<v.size()<<"\n";
    for(int i=0;i<v.size();i++)
        cout << v[i] << "\n";
    return 0;
}
