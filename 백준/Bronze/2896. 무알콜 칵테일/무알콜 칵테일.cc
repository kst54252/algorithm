#include<bits/stdc++.h>
using namespace std;
double a,b,c,aa,bb,cc,a1,b1,c1;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> a>>b>>c>>aa>>bb>>cc;
    a1=a/aa;
    b1=b/bb;
    c1=c/cc;
    if(a1<=b1&&a1<=c1){
        a=0;
        b=b-bb*a1;
        c=c-cc*a1;
    }
    else if(b1<=a1&&b1<=c1){
        b=0;
        a-=aa*b1;
        c-=cc*b1;
    }
    else{
        a-=aa*c1;
        b-=bb*c1;
        c=0;
        }
        cout.precision(10);
    cout<<a<<" "<<b<<" "<<c;    
    return 0;
}
    