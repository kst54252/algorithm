#include <bits/stdc++.h>
using namespace std;
int n,k;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        if(n%i==0)
            k--;
        if(k==0){
            cout<<i;
            return 0;
        }
    }
    cout<<0;
    return 0;
}