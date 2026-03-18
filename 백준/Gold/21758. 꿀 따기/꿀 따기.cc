#include <bits/stdc++.h>

using namespace std;
int n,R[100001],L[100001],a[100001],mx;
int main()
{
    //freopen("input.txt","r",stdin);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        R[i]+=a[i]+R[i-1];
    }
    for(int i=n;i>=1;i--)
        L[i]+=a[i]+L[i+1];

    for(int i=2;i<=n;i++)
        mx=max(mx,R[n]-a[1]-a[i]+R[n]-R[i]);
    for(int i=1;i<=n-1;i++)
        mx=max(mx,L[1]-a[n]-a[i]+L[1]-L[i]);
    for(int i=2;i<n;i++)
        mx=max(mx,R[i]-a[1]+R[n-1]-R[i-1]);
    printf("%d",mx);
    return 0;
}
