#include <bits/stdc++.h>

using namespace std;
int n,k,a,b,ans,d[100001];
int main(){
    //freopen("input.txt","r",stdin);
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> k ;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        for(int j=k;j>=0;j--)
            if(j+a<=k)
            if(j==0||d[j])
                d[j+a]=max(d[j+a],d[j]+b);
    }
    for(int j=k;j>=0;j--)
        ans=max(ans,d[j]);
    cout << ans;
    return 0;
}
