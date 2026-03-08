#include<bits/stdc++.h>
using namespace std;
int a=2,n;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        a=a*2-1;
    }
    cout<<a*a;
	return 0;
}