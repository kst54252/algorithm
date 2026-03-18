#include<bits/stdc++.h>
using namespace std;
long long n,ans,a[200001]={INT_MAX,},dp[200001];
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        dp[i]=1;
        if(a[i-1] < a[i])
            dp[i] += dp[i-1];
        
        ans += dp[i];
    }
    cout << ans;
    return 0;
}