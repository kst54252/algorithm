#include <bits/stdc++.h>
using namespace std;
int a[1001],n,ans,cnt;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    
    sort(a,a+n);
    for(int i=0;i<n;i++){
        ans+=cnt+a[i];
        cnt+=a[i];
    }
    cout<<ans;
    return 0;
}




