#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, a, b, x=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        if(abs(a-x)<=b)
            x++;
    }
    cout << x;
}