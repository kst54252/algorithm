#include <bits/stdc++.h>
using namespace std;
long long h,s;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> h >> s;
    if(h<=2)
        cout << 1;
    else if(h == 3){
        cout << 2+s;
    }
    else if(h == 4){
        cout << 2+s;
    }
    else
        cout << (h+s*3+1)/2;
    return 0;
}