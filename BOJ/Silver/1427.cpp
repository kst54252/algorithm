#include<bits/stdc++.h>
using namespace std;
int a[10001];
string s;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> s;
    for(int i=0;i<s.size();i++)
        a[i]=s[i];
    
    sort(a,a+s.size());
    for(int i=s.size()-1;i>=0;i--)
        cout<<(char)a[i];
    return 0;
}
