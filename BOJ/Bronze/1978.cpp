#include <bits/stdc++.h>

using namespace std;
int n,a,cnt,p[1001]={1,1};
int main()
{
    for(int i=2;i*i<1000;i++)
        for(int j=i*2;j<=1000;j+=i)
            p[j]=1;

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(!p[a])
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}
