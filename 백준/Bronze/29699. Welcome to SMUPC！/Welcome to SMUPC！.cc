#include<bits/stdc++.h>
using namespace std;
int n;
string a=" WelcomeToSMUPC"; 
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    if(n%14==0)
        cout<<"C";
    else    
    cout << a[n%14];
    
    return 0;
}
    