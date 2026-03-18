#include <bits/stdc++.h>
using namespace std;
int n,m,ch,mx;
string s[1001],ss;
bool COM(string a, string b) {
    if (a == b)
        return 0;
    string ab = a+b;
    string ba = b+a;
    if (ab > ba)
        return 1;
    else
        return 0;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);

    cin >> n >> m;

    for (int i=0;i<n;i++) {
        cin >> s[i];
        if (s[i] != "0")
            ch = 1;
    }
    if (ch == 0)
        cout << 0;
        
    else {    
        for(int i=0;i<n;i++){
            int str=0;
            for(int j=0;j<s[i].size();j++)
                str=str*10+s[i][j]-'0';
            if(mx<str){
                ss=s[i];
                mx=str;
            }
        }
        for(int i=n;i<m;i++)
            s[i]=ss;
        sort(s,s+m,COM);
        for (int i=0;i<m;i++)
            cout << s[i];
    }
    return 0;
}
