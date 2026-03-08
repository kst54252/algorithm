#include <bits/stdc++.h>
using namespace std;
int n,ch;
string s[1001];
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

    cin >> n;

    for (int i=0;i<n;i++) {
        cin >> s[i];
        if (s[i] != "0")
            ch = 1;
    }

    if (ch == 0)
        cout << 0;
    else {
        sort(s,s+n,COM);
        for (int i=0;i<n;i++)
            cout << s[i];
    }
    return 0;
}
