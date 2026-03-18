#include<bits/stdc++.h>
using namespace std;
int n, t, p, arr[10],a,b,c;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<6;i++)
        cin >> arr[i];

    cin >> t >> p;
    for(int i=0;i<6;i++)
        a += (arr[i] / t) + (bool)(arr[i] % t);

    cout << a << "\n" << n/p << " " << n%p;
    return 0;
}
