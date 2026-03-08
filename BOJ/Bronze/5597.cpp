#include <bits/stdc++.h>

using namespace std;
int a[31],b;
int main()
{

    for(int i=0;i<28;i++){
        cin >> b;
        a[b]=1;
    }

    for(int i=1;i<=30;i++)
        if(!a[i])
            cout<<i<<"\n";
    return 0;
}
