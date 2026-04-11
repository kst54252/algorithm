#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int N;
    cin >> N;

    vector<int> h(N);
    for(int i=0;i<N;i++)
        cin >> h[i];

    vector<int> dp(500000 + 1, -1);
    dp[0] = 0;

    for(int i=0;i<N;i++){
        vector<int> dp1 = dp;

        for(int diff = 0; diff<=500000;diff++){
            if(dp[diff] == -1)
                continue;
            if(diff + h[i] <= 500000)
                dp1[diff + h[i]] = max(dp1[diff + h[i]], dp[diff] + h[i]);
            if(diff >= h[i])
                dp1[diff - h[i]] = max(dp1[diff - h[i]], dp[diff]);
            else
                dp1[h[i] - diff] = max(dp1[h[i] - diff], dp[diff] + h[i] - diff);
        }
        dp = dp1;
    }
    if(dp[0] > 0)
        cout << dp[0];
    else
        cout << -1;
    return 0;
}