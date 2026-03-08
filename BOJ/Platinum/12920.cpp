#include <bits/stdc++.h>

using namespace std;
int n,m,a,b,c,ans,d[10001];
int main(){
    freopen("input.txt","r",stdin);
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> a >> b >>c;
        for(int o=0;o<c;o++)
        for(int j=m;j>=0;j--)
            if(j+a<=m)
            if(j==0||d[j])
                d[j+a]=max(d[j+a],d[j]+b);
    }
    for(int j=m;j>=0;j--)
        ans=max(ans,d[j]);
    cout << ans;
    return 0;
}
