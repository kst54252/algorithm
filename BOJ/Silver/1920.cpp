#include <bits/stdc++.h>

using namespace std;
int n,m,k,L,R,ans;
int a[100001],b;
int main()
{
    //freopen("input.txt","r",stdin);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&b);
        L=0;R=n-1;ans=0;
        while(L<=R){
            if(a[(L+R)/2]==b){
                ans=1;
                break;
            }
            else if(a[(L+R)/2]>b)
                R=(L+R)/2-1;
            else
                L=(L+R)/2+1;
        }
        printf("%d\n",ans);
    }
    return 0;
}
