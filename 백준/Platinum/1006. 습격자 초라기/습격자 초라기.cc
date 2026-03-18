#include<bits/stdc++.h>
#define INF 10000000000
using namespace std;
int t, n, w, ans;
int a[2][10001], dp[10001][3];

void f(){
    for(int i=2;i<=n;i++){
        int up = 2- (a[0][i-1]+a[0][i]<=w);
        int down = 2- (a[1][i-1]+a[1][i]<=w);
        int both = 2- (a[0][i]+a[1][i]<=w);
        dp[i][0] = min({dp[i-2][0]+up+down, dp[i-1][0]+both, dp[i-1][1]+up+1, dp[i-1][2]+down+1});
        dp[i][1] = min(dp[i-1][2]+down, dp[i-1][0]+1);
        dp[i][2] = min(dp[i-1][1]+up, dp[i-1][0]+1);
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> t;
    for(int i=0;i<t;i++){

        ans = INF;
        memset(dp,0,sizeof(dp));
        cin >> n >> w;
        for(int j=0;j<2;j++)
            for(int k=1;k<=n;k++)
                cin >> a[j][k];
        if(n==1)
            ans = 2-(a[0][1]+a[1][1]<=w);

        else{
            int uu=a[0][1],dd=a[1][1];
            dp[1][0] = 2-(a[0][1]+a[1][1]<=w);
            dp[1][1] = dp[1][2] = 1;
            f();
            ans = min(ans, dp[n][0]);
            
            if(a[0][1]+a[0][n]<=w){
                dp[1][0]=2;
                dp[1][1]=dp[1][2]=1;
                a[0][1]=INF;
                f();
                ans=min(ans, dp[n][1]);
                a[0][1]=uu;
            }
            if(a[1][1]+a[1][n]<=w){
                dp[1][0]=2;
                dp[1][1]=dp[1][2]=1;
                a[1][1]=INF;
                f();
                ans=min(ans,dp[n][2]);
                a[1][1]=dd;
            }
            if(a[0][1]+a[0][n]<=w&&a[1][1]+a[1][n]<=w){
                a[0][1]=a[1][1]=INF;
                dp[1][0]=2;
                dp[1][1]=dp[1][2]=1;
                f();
                ans=min(ans,dp[n-1][0]);
                a[0][1]=uu;
                a[1][1]=dd;
            }
        }
        cout << ans <<"\n";
        
    }
}