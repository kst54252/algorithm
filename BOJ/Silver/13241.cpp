#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
    return b?gcd(b,a%b):a;
}
long long lcm(long long a, long long b){
    return (a*b)/gcd(a,b);
}
long long n, a, b;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> a >> b;
    cout<<lcm(a,b)<<"\n";

    return 0;
}
