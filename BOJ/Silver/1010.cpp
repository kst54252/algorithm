#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, x, ans=1;
    scanf("%d",&x);
    for(int j=0;j<x;j++){
        ans=1;
        scanf("%d %d",&n ,&m);

        for(int i=0;i<n;i++){
            ans*=m-i;
            ans/=1+i;
        }

        printf("%d\n",ans);

    }

    return 0;
}
