#include<bits/stdc++.h>
using namespace std;
int n, i=2;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    while(i<=10000000){

         if(n%i==0){
            cout << i << "\n";
            n /= i;
            if(n==1)
                return 0;
        }
        else
            i++;
    }
    
    return 0;
}