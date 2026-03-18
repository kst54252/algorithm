#include <bits/stdc++.h>
using namespace std;

int n, a[6]={0,1,1,2,2,2};
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n;
    if(n<=5)
        cout<<a[n];
    else
        cout<<"3";
    return 0;
}