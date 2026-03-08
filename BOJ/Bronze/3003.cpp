#include <bits/stdc++.h>

using namespace std;
int a[6],b[6]={1,1,2,2,2,8};
int main()
{
    for(int i=0;i<6;i++){
        cin >> a[i];
        cout<<b[i]-a[i]<<" ";
    }
    return 0;
}
