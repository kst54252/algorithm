#include <bits/stdc++.h>
using namespace std;

int a,b,n,aa,bb;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        aa+=a;
        bb+=b;
        cout << aa-bb<<"\n";
    }

    return 0;
}