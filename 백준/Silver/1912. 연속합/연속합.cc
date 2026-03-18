#include<bits/stdc++.h>
using namespace std;
int n,ans=INT_MIN,a[100001];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        if(a[i-1]>0)
            a[i]+=a[i-1];
        ans = max(ans, a[i]);
    }
    cout << ans;
}

