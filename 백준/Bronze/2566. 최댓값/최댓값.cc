#include<bits/stdc++.h>
using namespace std;
int ii,jj,mx,x,a[100][100];
int main(){

    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++){
            cin >> x;
            if(x>mx){
                mx=x;
                ii=i;
                jj=j;
            }
        }
    cout << mx <<"\n"<< ii+1<<" "<<jj+1;
    return 0;
}