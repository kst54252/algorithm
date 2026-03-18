#include<bits/stdc++.h>
using namespace std;
int n,x;
long long a[102]={0,1,1};
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    for(int i=3;i<=100;i++)
        a[i]=a[i-3]+a[i-2];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        cout << a[x] <<"\n";
    }
}
    

