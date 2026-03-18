#include<bits/stdc++.h>

using namespace std;
int n,s,L,R,ans=INT_MAX,sum,a[100001];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> s;
    for (int i=0;i<n;i++){
        cin >> a[i];
        if (a[i] >= s)
            ans=1;
    }
    if (ans == 1){
        cout << 1;
        return 0;
    }
    sum = a[0];

    while (R<n){
        if (sum < s || L == R){
            R++;
            sum += a[R];
        }
        else {
            ans = min(ans, R-L+1);
            sum -= a[L];
            L++;
        }
        //cout<<L<<" "<<R<<" "<<sum<<"\n";
    }
    if (ans == INT_MAX)
        cout << 0;
    else
        cout << ans;

    return 0;
}