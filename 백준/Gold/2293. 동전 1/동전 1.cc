#include <bits/stdc++.h>

using namespace std;
int n,k,a[10001],d[10001];
int main(){
    cin >> n >> k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    d[0] = 1;
    for (int i=0;i<n;i++)
        for (int j=a[i];j<=k;j++)
            d[j]=d[j]+d[j-a[i]];
    cout<<d[k];
    return 0;
}
