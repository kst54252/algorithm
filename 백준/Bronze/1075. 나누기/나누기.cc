#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, f;
    cin >> n >> f;
    n-=(n%100);
    for(int i=0;i<=9;i++)
        if((n+i) % f == 0){
            cout<<0<<i;
            return 0;
        }
    for(int i=10;i<=99;i++)
        if((n+i) % f == 0){
            cout<<i;
            return 0;
        }
    return 0;
}