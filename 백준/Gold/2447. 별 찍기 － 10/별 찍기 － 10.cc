#include<bits/stdc++.h>
using namespace std;
int n;
void f(int x, int y, int n){
    if((x/n)%3 == 1 && (y/n)%3 == 1)
        cout <<" ";
    else{
        if(n / 3 == 0)
            cout <<"*";
        else
            f(x, y, n/3);
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n;
	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            f(i, j, n);
        cout << "\n";
    }
}