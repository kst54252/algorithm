#include <bits/stdc++.h>
using namespace std;

int n,a,arr[100],x=1,ans;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        arr[a]++;
    }
    for(int i=1;i<=n;i++){
        x*=arr[i];
        if(arr[i])
            ans+=x;
    }
    cout<<ans;
    return 0;
}