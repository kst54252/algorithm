#include<bits/stdc++.h>
using namespace std;
int n,m,x;
stack<int>s;
int main(){
    scanf("%d %d",&n,&m);
    while(n>=m){
        s.push(n%m);
        n/=m;
    }
    s.push(n);
    while(!s.empty()){
        x=s.top();
        if(x>9)
            printf("%c",x+55);
        else
            printf("%d",x);
        s.pop();
    }

	return 0;
}