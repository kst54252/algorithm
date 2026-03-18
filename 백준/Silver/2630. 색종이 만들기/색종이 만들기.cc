#include<bits/stdc++.h>
using namespace std;
int n, nn, a[130][130], b, w;
void f(int x, int y, int n){
    int cnt=0;
    for(int i=x;i<x+n;i++)
        for(int j=y;j<y+n;j++)
            if(a[i][j])
                cnt++;
    if(cnt==n*n)
        b++;
    else if(!cnt)
        w++;
    else{
        f(x, y, n/2);
        f(x, y+n/2, n/2);
        f(x+n/2, y, n/2);
        f(x+n/2,y+n/2, n/2);               
    }    
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin >> a[i][j];
   
    f(1,1,n);
    cout << w <<"\n"<< b;

    return 0;
}
