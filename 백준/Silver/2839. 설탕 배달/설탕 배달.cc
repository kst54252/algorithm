#include <bits/stdc++.h>
using namespace std;
int n,d[10000]={1};
int main()
{
    scanf("%d",&n);
    for(int i=0;i<=5000;i++)
        if(d[i])
            d[i+3]=d[i]+1;
    for(int i=0;i<=5000;i++)
        if(d[i]){
            if(d[i+5]&&d[i+5]<d[i]+1);
                d[i+5]=d[i]+1;
            if(!d[i+5])
                d[i+5]=d[i]+1;
        }
    if(d[n])
        printf("%d",d[n]-1);
    else
        printf("-1");
    return 0;
}
