#include <bits/stdc++.h>

using namespace std;
int n,ans;
int main()
{
    for(int i=0;i<5;i++){
        scanf("%d",&n);
        ans+=n*n;
    }
    printf("%d",ans%10);
    return 0;
}
