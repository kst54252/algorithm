#include <bits/stdc++.h>

using namespace std;
int n,m,b,sum,t,a[501][501],ans1=2100000000,ans2;
int main()
{
    freopen("input.txt","r",stdin);
    scanf("%d %d %d",&n,&m,&b);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
    for(int k=256;k>=0;k--)
        if(n*m*k<=b+sum){
            t=0;

            for(int i=0;i<n;i++)
                for(int j=0;j<m;j++){
                    if(a[i][j]>k)
                        t+=(a[i][j]-k)*2;
                    else if(a[i][j]<k)
                        t+=k-a[i][j];
                }
            if(ans1>t){
                ans1=t;
                ans2=k;
            }

    }
    printf("%d %d",ans1,ans2);
    return 0;
}
