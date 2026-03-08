#include <bits/stdc++.h>

using namespace std;
int n, m, ans,a[1000001];
string s;
int main()
{
    freopen("input.txt","r",stdin);
    cin >> n;
    cin >> m;
    cin >> s;
    for(int i=2;i<m;i++)
        if(s[i-2]=='I'&&s[i-1]=='O'&&s[i]=='I')
            a[i]=a[i-2]+1;
    for(int i=2;i<m;i++)
        if(a[i]>=n)
            ans++;
    cout<<ans;
    return 0;
}
