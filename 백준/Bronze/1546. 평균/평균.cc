#include <bits/stdc++.h>

using namespace std;
int n, a[1001], mx;
double sum;
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        mx=max(mx,a[i]);
    }
    for(int i=1;i<=n;i++)
        sum+=(double)a[i]/mx*100;
    cout<<sum/n;
    return 0;
}
