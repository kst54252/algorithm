#include<bits/stdc++.h>
using namespace std;
long long a, b, x[55];
long long f(long long n){
    long long r = n & 1;
    for(int i=54;i>0;i--)
        if(n & ((long long)1 << i)){
            r += x[i-1] + n - ((long long)1 << i)+1;
            n -= (long long)1 << i;
        }
    return r;
}
int main(){ 
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> a >> b;
    x[0]=1;
    for(int i=1;i<55;i++){
        x[i] = 2*x[i-1]+((long long)1 << i);
    }
    cout << f(b) - f(a-1);
}