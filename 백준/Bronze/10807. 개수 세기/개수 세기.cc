#include <bits/stdc++.h>

using namespace std;
int n,m,a[10000];
int main()
{
    cin >>n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> m;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==m)
            cnt++;
    }
    cout<<cnt;
    return 0;
}
