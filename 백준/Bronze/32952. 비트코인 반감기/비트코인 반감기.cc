#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll r, k, m;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> r >> k >> m;
    while(m >= k){
        r /= 2;
        m-=k;
        if(r == 0)
            break;
    }
    cout << r;
    return 0;
}