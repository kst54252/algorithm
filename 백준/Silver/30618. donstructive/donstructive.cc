#include <bits/stdc++.h>
using namespace std;
int n;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=1;i<=n;i+=2)
        cout<<i<<" ";
    if(n%2)
        for(int i=n-1;i>=2;i-=2)
            cout<<i<<" ";
    else
        for(int i=n;i>=2;i-=2)
            cout<<i<<" ";
    return 0;
}