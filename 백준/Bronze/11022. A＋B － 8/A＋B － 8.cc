#include <bits/stdc++.h>

using namespace std;
int n,a,b;
int main()
{
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        printf("Case #%d: %d + %d = %d\n",i+1,a,b,a+b);
    }
    return 0;
}
