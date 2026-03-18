#include<bits/stdc++.h>
using namespace std;
int cnt1;
int fib(int n) {
    cnt1++;
    if (n == 1 || n == 2)
         return 1;
    else return (fib(n - 1) + fib(n - 2));
}
int fibonacci(int n){
    int f[40];
    f[1] = 1;f[2] = 1;
    for(int i=3;i<=n;i++)
        f[i] = f[i - 1] + f[i - 2];
    return f[n];
}
int n;
string s[11], ss;
int main(){
    scanf("%d",&n);
    fib(n);
    fibonacci(n);
    printf("%d %d",(cnt1+1)/2, n-2);
}