#include<bits/stdc++.h>
using namespace std;
int c, n, q;
string s, a, b;
unordered_set<string> colors, names;
unordered_set<int> l;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> c >> n;
    for(int i=0;i<c;i++){
        cin >> s;
        colors.insert(s);
        l.insert(s.size());
    }
    vector<int> len(l.begin (), l.end());
    for(int i=0;i<n;i++){
        cin >> s;
        names.insert(s);
    }
    a.reserve(2005);
    b.reserve(2005);
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> s;
        bool ans=0;
        for(int ll : len){
            if(ll < s.length()){
                a.assign(s, 0, ll);
                if(colors.count(a)){
                    b.assign(s, ll, string::npos);
                    if(names.count(b)){
                        ans = 1;
                        break;
                    }
                }
            }
        }
        if(ans)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}