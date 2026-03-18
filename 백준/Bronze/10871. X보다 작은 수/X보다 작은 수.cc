#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,a;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a<m)
            printf("%d ",a);
    }
    return 0;
}
