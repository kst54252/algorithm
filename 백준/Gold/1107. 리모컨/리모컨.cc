#include <bits/stdc++.h>

using namespace std;
int a,n,m,bt[10],ch[1000001],ans;
int main()
{
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d",&a);
        bt[a]=1;
    }
    for(int i=0;i<10;i++)
        if(!bt[i])
            ch[i]=1;
    ans=abs(n-100);
    for(int i=0;i<=1000001;i++)
        if(ch[i]){
            ans=min(ans,ch[i]+abs(n-i));
            for(int j=0;j<10;j++)
                if(bt[j]==0&&i*10+j<=1000001)
                    if(ch[i*10+j]==0)
                        ch[i*10+j]=ch[i]+1;
    }
    printf("%d",ans);
    return 0;
}
