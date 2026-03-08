#include<bits/stdc++.h>
using namespace std;
int n, nn, m, x, cnt;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    nn = n;
    while(1){

        cnt++;
        m = nn%10;
        x=0;
        while(nn>0){
            x += nn%10;
            nn/=10;
        }
        nn=x%10+m*10;
        if(nn == n){
            cout << cnt;
            return 0;
        }
    }
    
}