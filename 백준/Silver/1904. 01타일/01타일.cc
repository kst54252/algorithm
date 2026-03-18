#include<bits/stdc++.h>
using namespace std;
int n,a[1000000]={1,2};
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=2;i<n;i++){
        a[i]=(a[i-1]+a[i-2])%15746;
    }
    cout << a[n-1];
}

