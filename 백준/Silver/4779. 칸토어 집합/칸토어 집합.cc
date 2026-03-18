#include<bits/stdc++.h>
using namespace std;
void f(int n){
    if(n==1)
        cout << "- -";
    else{
        f(n-1);
        for(int i=0;i<pow(3,n-1);i++)
            cout <<" ";
        f(n-1);
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a, b;
    while(cin >> a){
        if(a==0)
            cout<<"-";
        else
            f(a);
        cout <<"\n";
    }

}