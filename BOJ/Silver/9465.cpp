#include <bits/stdc++.h>

using namespace std;
int t,n,a[100001][2],d[100001][2];
int main(){
    //freopen("input.txt","r",stdin);
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >>t;
    for(int i=0;i<t;i++){
        cin >>n;
        for(int j=1;j<=n;j++)
            cin >> a[j][0];
        for(int j=1;j<=n;j++)
            cin >> a[j][1];

        d[1][0]=a[1][0];d[1][1]=a[1][1];
        for(int j=2;j<=n;j++){
            d[j][0]=max(d[j-1][1],max(d[j-2][0],d[j-2][1]))+a[j][0];
            d[j][1]=max(d[j-1][0],max(d[j-2][0],d[j-2][1]))+a[j][1];
        }

        cout<<max(d[n][0],d[n][1])<<"\n";
    }

    return 0;
}
