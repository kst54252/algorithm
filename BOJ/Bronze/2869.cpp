#include<bits/stdc++.h>
using namespace std;
int a,b,n;
int main(){
    cin >> a >> b >> n;
    if(n<a)
        cout<<1;
    else{
        if((n-a)%(a-b)==0)
            cout<<(n-a)/(a-b)+1;
        else
            cout<<(n-a)/(a-b)+2;
    }
    return 0;
}