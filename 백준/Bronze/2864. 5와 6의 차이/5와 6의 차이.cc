#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a, b, five=0, six=0;
    cin >> a >> b;
    int aa=a, bb=b, cnt=1;
    while(a > 0){
        if(a%10 == 5)
            five += cnt;
        if(a%10 == 6)
            six += cnt;
        cnt*=10;
        a/=10;
    }
    cnt=1;
    while(b > 0){
        if(b%10 == 5)
            five += cnt;
        if(b%10 == 6)
            six += cnt;
        cnt*=10;
        b/=10;
    }
    cout << aa+bb-six << " " << aa+bb+five;
    return 0;
}