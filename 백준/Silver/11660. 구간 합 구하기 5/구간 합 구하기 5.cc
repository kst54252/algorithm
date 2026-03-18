#include<bits/stdc++.h>
using namespace std;
int n,m,a,b,c,d,arr[1025][1025];
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++){
            cin >> arr[i][j];
            arr[i][j]+=arr[i-1][j];
        }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            arr[i][j]+=arr[i][j-1];
    for(int i=0;i<m;i++){
        cin >>a>>b>>c>>d;
        cout<<arr[c][d]+arr[a-1][b-1]-arr[c][b-1]-arr[a-1][d]<<"\n";
    }
    return 0;
}