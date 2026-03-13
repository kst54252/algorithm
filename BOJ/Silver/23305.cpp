#include <bits/stdc++.h>
using namespace std;
int n, aa, cnt, a[1000001];

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> aa;
        a[aa]++;
    }
    for(int i=0;i<n;i++){
        cin >> aa;
        if(a[aa]>0)
            a[aa]--;
    }
    for(int i=0;i<1000001;i++)
        cnt+=a[i];
    cout<<cnt;
    return 0;
}