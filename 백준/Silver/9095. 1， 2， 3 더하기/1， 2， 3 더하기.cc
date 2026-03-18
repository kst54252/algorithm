#include <bits/stdc++.h>

using namespace std;
int n,a,d[100];
void f(int n,int cnt){
    if(n>10)
        return;
    d[n]++;
    for(int i=1;i<=3;i++)
        f(n+i,cnt+1);
}
int main()
{
    f(0,0);
    scanf("%d",&n);
    for(int k=0;k<n;k++){
        scanf("%d",&a);
        printf("%d\n",d[a]);
    }

    return 0;
}
