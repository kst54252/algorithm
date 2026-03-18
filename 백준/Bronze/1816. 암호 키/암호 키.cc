#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, a, j;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(ll i=0;i<n;i++){
        cin >>a;
        int k=0;
        for(j=2;j<=1000000;j++)
            if(a%j==0){
                k=1;
                break;
                }
        if(k)
            cout<<"NO\n";
        else
            cout<<"YES\n";
            }    
    return 0;
}
    