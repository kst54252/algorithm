#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,b,mn=99999,aa,bb;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        if(b<mn){
            mn=b;
            aa=a;
            bb=b;
        }
    }

    cout << aa <<" "<< bb;

}