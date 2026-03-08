#include<bits/stdc++.h>
using namespace std;
map<string, int> m;
vector<string> v;
int n,nn,cnt;
string a, b;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        if(b[0] == 'e'){
            if(m.find(a)!=m.end())
                m[a]=1;
            else
                m.insert({a,1});
        }
        else
            m[a] = 0;
    }

    for (auto iter = m.begin() ; iter !=  m.end(); iter++)
        if(iter->second)
            v.push_back(iter->first);
    sort(v.begin(), v.end(), greater<>());
    for(int i=0;i<v.size();i++)
        cout << v[i] << "\n";
    return 0;
}
