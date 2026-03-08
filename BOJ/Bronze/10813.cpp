#include <bits/stdc++.h>

using namespace std;
int a,b,c,arr[10000],n,m;
int main()
{
    cin >> n >> m;
    for(int i=1;i<=n;i++)
        arr[i]=i;
    for(int i=0;i<m;i++){
        cin >> a >> b;
        int aa=arr[a],bb=arr[b];
        arr[a]=bb;
        arr[b]=aa;
    }
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
