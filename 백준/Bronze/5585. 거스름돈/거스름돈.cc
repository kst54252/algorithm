#include <bits/stdc++.h>
using namespace std;
int a[6]={500,100,50,150,10,5};
int main(){
    int n,ans=0;
    cin >> n;
    n=1000-n;
    for(int i=0;i<6;i++){
        ans+=n/a[i];
        n=n%a[i];
    }
    cout << ans+n;
    
    return 0;
}