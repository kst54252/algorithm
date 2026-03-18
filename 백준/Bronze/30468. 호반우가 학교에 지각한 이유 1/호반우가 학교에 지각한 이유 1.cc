#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,n;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> a >> b >> c >> d >> n;
    if(n*4<=a+b+c+d)
        cout<<0;
    else cout << n*4-(a+b+c+d);
    return 0;
}