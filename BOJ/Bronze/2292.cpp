#include<bits/stdc++.h>
using namespace std;
int a=0,b=1,n,cnt;
int main(){
    scanf("%d",&n);

    while(n>b){
        a++;
        b+=a*6;
    }
    cout << a+1;
	return 0;
}