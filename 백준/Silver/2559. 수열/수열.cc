#include<bits/stdc++.h>
using namespace std;
int a, b, ans=-210000000, arr[100002];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> a >> b;
    for(int i=1;i<=a;i++){
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    for(int i=b;i<=a;i++)
        ans = max(ans, arr[i]-arr[i-b]);
    cout << ans;
}