#include <bits/stdc++.h>

using namespace std;
int n,ans,a[10001];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0; i<n; i++){
        if(a[i+1] > a[i+2]){
            int x = min(a[i], a[i+1]-a[i+2]);
            ans += 5*x; a[i]-=x; a[i+1]-=x;
            int y = min(a[i], min(a[i+1], a[i+2]));
            ans+=7*y; a[i]-=y; a[i+1]-=y; a[i+2]-=y;
        }
        else{
            int x = min(a[i], min(a[i+1], a[i+2]));
            ans+=7*x; a[i]-=x; a[i+1]-=x; a[i+2]-=x;
            int y = min(a[i], a[i+1]);
            ans+=5*y; a[i]-=y; a[i+1]-=y;
        }
        ans += 3*a[i];
    }
    cout << ans;
    return 0;
}
