#include <bits/stdc++.h>

using namespace std;
int n,m,a,b,arr[101],arr1[101];
int main()
{
    cin >> n >> m;
    for(int i=1;i<=n;i++)
        arr[i]=i;
    for(int i=0;i<m;i++){
        cin >> a >> b;
        for(int j=a;j<=b;j++)
            arr1[j]=arr[j];
        for(int j=a;j<=b;j++)
            arr[j]=arr1[a+b-j];
    }
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
