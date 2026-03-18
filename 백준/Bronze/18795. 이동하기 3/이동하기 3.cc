#include <bits/stdc++.h>
using namespace std;
long long n,m,a,ans;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    cin >> n >> m;
    for(int i=0;i<n+m;i++){
        cin >> a;
        ans+=a;
    }
    cout<<ans;
    return 0;
}