#include <bits/stdc++.h>
using namespace std;
string a,b,c;
int l,k,p;
int main (){
    
    cin >> a >> b >> c;
    if(a[0]=='l')l++;if(a[0]=='k')k++;if(a[0]=='p')p++;
    if(b[0]=='l')l++;if(b[0]=='k')k++;if(b[0]=='p')p++;
    if(c[0]=='l')l++;if(c[0]=='k')k++;if(c[0]=='p')p++;
    
    if(l==1&&k==1&&p==1)
        cout << "GLOBAL";
    else
        cout << "PONIX";
    return 0;
}
