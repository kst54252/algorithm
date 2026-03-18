#include <bits/stdc++.h>
using namespace std;
int a,b,aa=2,bb=2,n,ans;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        if(aa==a && a!=0)
            ans++;
        if(bb==b && b!=0)
            ans++;
        if(a==b && a!=0)
            ans++;
        aa=a;bb=b;
    }
    cout<<ans;
    return 0;
}