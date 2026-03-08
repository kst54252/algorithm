#include <bits/stdc++.h>

using namespace std;
int a,b,c,arr[10000],n,m;
int main()
{
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> a >> b >> c;
        for(int j=a;j<=b;j++)
            arr[j]=c;
    }
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
