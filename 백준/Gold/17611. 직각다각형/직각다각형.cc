#include <bits/stdc++.h>

using namespace std;
int n,mx,aa,bb,xx,yy,x,y,xa,ya;
int a[1000001],b[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    scanf("%d",&n);
    scanf("%d %d",&xx,&yy);
    xa=xx;
    ya=yy;
    for(int i=1;i<n;i++){
        scanf("%d %d",&x,&y);
        if(x==xx){
            a[min(y,yy)+500000]++;
            a[max(y,yy)+500000]--;
        }
        else{
            b[min(x,xx)+500000]++;
            b[max(x,xx)+500000]--;
        }
        xx=x;
        yy=y;
    }
    if(xa==x){
        a[min(ya,y)+500000]++;
        a[max(ya,y)+500000]--;
    }
    else{
        b[min(xa,x)+500000]++;
        b[max(xa,x)+500000]--;
    }
    for(int i=0;i<=1000000;i++){
        aa+=a[i];
        bb+=b[i];
        mx=max(mx,max(aa,bb));
    }
    printf("%d",mx);
    return 0;
}
