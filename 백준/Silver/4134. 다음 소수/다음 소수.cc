#include<bits/stdc++.h>
using namespace std;
long long n, a, prime;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(long long i=0;i<n;i++){
        cin >> a;
        if(a==1||a==0)
            a=2;
        while(1){
            prime = 0;
            for(long long k=2;k*k<=a;k++)
                if(a%k==0){
                    prime = 1;
                    break;
                }
            if(prime == 0){
                cout << a <<"\n";
                break;
            }
            a++;
        }

    }
    return 0;
}