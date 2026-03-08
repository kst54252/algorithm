#include <bits/stdc++.h>

using namespace std;
int v,e,a,b,odd,even,ans=2100000000,cnt[1001];
int main()
{
    //freopen("input.txt","r",stdin);
    scanf("%d %d",&v,&e);
    for(int i=0;i<e;i++){
        scanf("%d %d",&a,&b);
        cnt[a]++;
        cnt[b]++;
    }
    for(int i=1;i<=v;i++){
        if(cnt[i]%2==0)
            even++;
        else
            odd++;
    }
    if(even==v)
        ans=0;
    else{
        if(odd%2==0)
            ans=min(ans,odd/2-1);
        else
            ans=min(ans,odd/2);
    }
    printf("%d",ans);
    return 0;
}
