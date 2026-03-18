#include<bits/stdc++.h>
using namespace std;
int a,b,n;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> a >> b >> n;
    if((b/10)%2==0 || b/10 == 5){
        cout<<"-1";
        return 0;
    }
    cout << a;
    if(a%10 == 9){
        cout<<7;
        for(int i=0;i<n-5;i++)
            cout<<1;
        cout<<b;
    }
    else{
        for(int i=0;i<n-4;i++)
            cout<<1;
        cout<<b;
    }
    return 0;
}