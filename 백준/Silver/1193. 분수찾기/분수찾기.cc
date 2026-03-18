#include<bits/stdc++.h>
using namespace std;
int a,b,n;
int main(){
    scanf("%d",&n);
    while(1){
        a++;
        if(n-b<=a)
            break;
        b+=a;
    }
    if(a%2) cout <<a+1-n+b <<"/"<<n-b;
	else cout <<n-b <<"/"<<a+1-n+b;
    return 0;
}