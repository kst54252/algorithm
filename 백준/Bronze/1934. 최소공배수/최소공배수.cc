#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    return b?gcd(b,a%b):a;
}
int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}
int n, a, b;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        cout<<lcm(a,b)<<"\n";
    }
    return 0;
}
