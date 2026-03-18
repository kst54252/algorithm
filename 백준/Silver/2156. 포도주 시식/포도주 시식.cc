#include <bits/stdc++.h>
using namespace std;
int n,a[10001],dp[10001];
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    dp[0] = a[0];
    dp[1] = a[0]+a[1];
    dp[2] = max({a[0]+a[2],a[1]+a[2],a[0]+a[1]});
    for(int i=3;i<n;i++){
        dp[i]=max({dp[i-1],dp[i-3]+a[i-1]+a[i],dp[i-2]+a[i]});
    }
    printf("%d",dp[n-1]);
    
    return 0;
}