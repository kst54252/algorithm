#include <bits/stdc++.h>

using namespace std;
int n,m,a;
int d[30001],ch[30001];
int main()
{
    d[15000]=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        for(int j=0;j<=30000;j++)
            ch[j]=d[j];
        for(int j=0;j<=30000;j++)
            if(ch[j]==1){
                d[j-a]=1;
                d[j+a]=1;
            }
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&a);
        if(a>15000)
            printf("N ");
        else{
        if(d[a+15000])
            printf("Y ");
        else
            printf("N ");
        }
    }
    return 0;
}
