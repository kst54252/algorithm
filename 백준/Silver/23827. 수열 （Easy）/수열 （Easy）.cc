#include <bits/stdc++.h>
using namespace std;

int n;
long long a[500001], b[500001], ans;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        b[i]=a[i]+b[i-1];
    }
    for(int i=1;i<=n;i++){
        ans+=b[i-1]*a[i];
        ans%=1000000007;
    }
    cout<<ans;    
    return 0;
}