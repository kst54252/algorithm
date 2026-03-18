#include<bits/stdc++.h>
using namespace std;

int n,m;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> m;
        if(m==1){
            cout<<0<<"\n";
            continue;
        }
        if(m%2){
            cout<<1;
            for(int i=0;i<m-2;i++)
                cout<<2;
            cout<<1;
        }
        else
            for(int i=0;i<m;i++)
                cout <<1;
        cout <<"\n";
    }
}