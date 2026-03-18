#include<bits/stdc++.h>
using namespace std;
map<string, int> m;
map<int, string> mm;

int n,nn,cnt;
string a;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> nn;
    for(int i=1;i<=n;i++){
        cin >> a;
        m.insert({a,i});
        mm.insert({i,a});
    }

    for(int i=0;i<nn;i++){
        cin >> a;
        if(a[0]>='0'&&a[0]<='9')
            cout << mm[stoi(a)] << "\n";
        else
            cout << m[a] <<"\n";
    }
    return 0;
}
