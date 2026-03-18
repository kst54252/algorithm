#include <bits/stdc++.h>

using namespace std;
int n,d[1001]={0,1,2};
int main()
{

    scanf("%d",&n);
    for(int i=3;i<=n;i++)
        d[i]=(d[i-1]+d[i-2])%10007;
    printf("%d",d[n]);
    return 0;
}
