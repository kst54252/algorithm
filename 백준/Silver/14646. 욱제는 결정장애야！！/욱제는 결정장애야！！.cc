#include <bits/stdc++.h>
using namespace std;
int n, a, ans, cnt, arr[100001];

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n*2;i++){
        cin >> a;
        if(!arr[a]){
            arr[a]=1;
            cnt++;
        }
        else{
            arr[a]=0;
            cnt--;
        }
        ans = max(ans, cnt);
    }
    cout << ans;
    return 0;
}