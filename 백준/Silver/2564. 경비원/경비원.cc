#include <bits/stdc++.h>

using namespace std;
int x,y,xx,yy,n,c,d,ans;
int a[1000],b[1000];
int f(int i,int j){
    if(i==2)
        return j;

    else if(i==4)
        return x+y-j;

    else if(i==1)
        return 2*x+y-j;

    else
        return 2*x+y+j;
}
int main()
{
    //freopen("input.txt","r",stdin);

    scanf("%d %d",&x,&y);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d %d",&a[i],&b[i]);

    scanf("%d %d",&xx,&yy);

    d=f(xx,yy);

    for(int i=0;i<n;i++){
        c=f(a[i],b[i]);
        ans+=min(2*(x+y)-abs(c-d),abs(c-d));
        //cout<<min(2*(x+y)-abs(c-d),abs(c-d))<<"\n";
    }

    printf("%d",ans);
    return 0;
}
