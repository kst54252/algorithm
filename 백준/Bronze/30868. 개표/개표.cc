#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> m;
        for(int j=0;j<m/5;j++)
            cout << "++++ ";
        for(int j=0;j<m%5;j++)
            cout <<"|";
        cout << "\n";
    }

}