#include <bits/stdc++.h>
using namespace std;
int n,ch;
string s[102];
vector<string> vs, zs;

bool COM(string a, string b) {
    if (a == b)
        return 0;
    string ab = a+b;
    string ba = b+a;
    if (ab < ba)
        return 1;
    else
        return 0;
}
bool COM1(string a, string b) {

    if (a == b)
        return 0;

    int aa=0,bb=0,as=a.size(),bs=b.size();

    for(int j=0;j<as;j++)
        aa=aa*10+a[j]-'0';
    for(int j=0;j<bs;j++)
        bb=bb*10+b[j]-'0';

    return aa < bb;
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);

    cin >> n;

    for (int i=0;i<n;i++) {
        cin >> s[i];
        if(s[i][0]=='0')
            zs.push_back(s[i]);
        else{
            vs.push_back(s[i]);
            ch = 1;
        }
    }

    if (ch == 0)
        cout <<"INVALID";

    else {
        sort(vs.begin(),vs.end(),COM);
        sort(zs.begin(),zs.end(),COM1);
        cout<<vs[0];
        for (int i=0;i<zs.size();i++)
            cout << zs[i];
        for (int i=1;i<vs.size();i++)
            cout << vs[i];
    }
    return 0;
}
