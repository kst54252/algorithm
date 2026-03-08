#include <bits/stdc++.h>

using namespace std;
int n,m,a[1000001]={0,1};
int main()
{
    cin >> n >> m;
    for(int i=2;i*i<=m;i++)
        for(int j=i*2;j<=m;j+=i)
            a[j]=1;
    for(int i=n;i<=m;i++)
        if(!a[i])
            cout<<i<<"\n";
    return 0;
}
