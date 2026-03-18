#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    return b?gcd(b,a%b):a;
}
int a, b, c, d;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> a >> b >> c >> d;
    cout<<(a*d+b*c)/gcd(a*d+b*c,b*d)<<" "<<(b*d)/gcd(a*d+b*c,b*d);
    return 0;
}
