#include<bits/stdc++.h>
using namespace std;
int n, ans;
string str;
set<string> s;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> str;
        if(str == "ENTER")
            s.clear();
        else{
            if(s.find(str) == s.end()){
                ans++;
                s.insert(str);
            }
        }
    }
    cout << ans;

    return 0;
}