#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,ans,a[1001][1001],b[1001][1001],c[1001][1001],d[1001][1001];
string s;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        cin >> s;
        for(int j=1;j<=m;j++){
            a[i][j]=s[j-1]-'0';
            d[i][j]=a[i][j];
            if(a[i][j]){
                c[i][j]=c[i-1][j]+1;
                b[i][j]=b[i][j-1]+1;
                if(d[i-1][j-1])
                    for(int k=d[i-1][j-1];k>=1;k--)
                        if(b[i][j-1]>=k&&c[i-1][j]>=k){
                            d[i][j]=k+1;
                            break;
                        }
            }
            ans=max(ans,d[i][j]);
            //cout<<d[i][j]<<" ";
        }
        //cout<<"\n";
    }
    cout<<ans*ans;
    return 0;
}