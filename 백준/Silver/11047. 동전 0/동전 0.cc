#include <bits/stdc++.h>

using namespace std;
int n,k,a[10],m;
int main()
{
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=n-1;i>=0;i--){
        m+=k/a[i];
        k%=a[i];
    }
    printf("%d",m);
    return 0;
}
