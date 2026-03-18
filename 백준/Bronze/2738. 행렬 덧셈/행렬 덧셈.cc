#include<bits/stdc++.h>
using namespace std;
int n,m,x,a[100][100];
int main(){
    
    cin >> n >> m;
    for(int k=0;k<2;k++)
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            cin >> x;
            a[i][j]+=x;
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}