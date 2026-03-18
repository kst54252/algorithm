#include<bits/stdc++.h>
long long ans, n;
int main(){
    scanf("%lld",&n);
    printf("%lld",n*(n-1)*(n-2)*(n-3)*(n-4)/120);
}