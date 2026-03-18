#include <bits/stdc++.h>

using namespace std;
long long ans,n,b,c,a[1000001];

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> b >> c;

    for(int i=0;i<n;i++)
        cin >> a[i];

    if(b <= c){
        for(int i=0;i<n;i++)
            ans += a[i];
        cout << ans*b;
        return 0;
    }

    for(int i=0; i<n; i++){
        if(a[i+1] > a[i+2]){
            long long x = min(a[i], a[i+1]-a[i+2]);
            ans += (b+c)*x; a[i]-=x; a[i+1]-=x;
            long long y = min(a[i], min(a[i+1], a[i+2]));
            ans+=(b+c+c)*y; a[i]-=y; a[i+1]-=y; a[i+2]-=y;
        }

        else{
            long long x = min(a[i], min(a[i+1], a[i+2]));
            ans+=(b+c+c)*x; a[i]-=x; a[i+1]-=x; a[i+2]-=x;
            long long y = min(a[i], a[i+1]);
            ans+=(b+c)*y; a[i]-=y; a[i+1]-=y;
        }
        ans += b*a[i];
    }
    cout << ans;
    return 0;
}

