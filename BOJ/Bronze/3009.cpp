#include<bits/stdc++.h>
using namespace std;
int n, m,x[1001],y[1001];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    for(int i=0;i<3;i++){
        cin >> n >> m;
        x[n]++;
        y[m]++;
    }
    for(int i=0;i<1001;i++)
        if(x[i]==1)
        cout<<i<<" ";
    for(int i=0;i<1001;i++)
        if(y[i]==1)
            cout<<i;
    return 0;
}