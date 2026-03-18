#include <bits/stdc++.h>

using namespace std;
int n,d[1000001]={0,1};
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        if(d[i]){
            if(i+1<=1000000)
                if(d[i+1]&&d[i+1]>d[i]+1||!d[i+1])
                    d[i+1]=d[i]+1;
            if(i*2<=1000000)
                if(d[i*2]&&d[i*2]>d[i]+1||!d[i*2])
                    d[i*2]=d[i]+1;
            if(i*3<=1000000)
                if(d[i*3]&&d[i*3]>d[i]+1||!d[i*3])
                    d[i*3]=d[i]+1;
        }
    printf("%d",d[n]-1);
    return 0;
}
