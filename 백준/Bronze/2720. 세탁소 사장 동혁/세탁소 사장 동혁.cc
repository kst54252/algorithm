#include<bits/stdc++.h>
using namespace std;
int a,n;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin >> a;
        cout <<a/25<<" ";
        a=a%25;
        cout<<a/10<<" ";
        a=a%10;
        cout<<a/5<<" ";
        a=a%5;
        cout<<a<<"\n";
    }
	return 0;
}