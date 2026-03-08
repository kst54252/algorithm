#include <bits/stdc++.h>

using namespace std;
int n,k,ans=1;
int main()
{
    cin >> n >> k;
    for(int i=0;i<k;i++){
        ans*=n;
        n--;
    }
    for(int i=1;i<=k;i++)
        ans/=i;
    cout<<ans;
    return 0;
}
