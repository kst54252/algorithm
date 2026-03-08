#include <bits/stdc++.h>

using namespace std;
int n,tot,a,b;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> tot;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        tot-=a*b;
    }
    if(!tot)
        cout<<"yes";
    else
        cout<<"No";
    return 0;
}
