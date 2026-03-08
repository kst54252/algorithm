#include <bits/stdc++.h>

using namespace std;
int n,k,a[102][3],d[10002];
int main()
{
    d[0]=1;
    //freopen("input.txt","r",stdin);
    scanf("%d %d",&n,&k);
    for(int i=0;i<k;i++)
        scanf("%d %d",&a[i][0],&a[i][1]);
    for(int i=0;i<k;i++){
        for(int j=n;j>=0;j--)
            for(int q=1;q<=a[i][1];q++)
                if(j-a[i][0]*q>=0)
                if(d[j-a[i][0]*q]>0||j-a[i][0]*q==0)
                    d[j]+=d[j-a[i][0]*q];
    }
    printf("%d",d[n]);
    return 0;
}
