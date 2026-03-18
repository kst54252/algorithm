#include <bits/stdc++.h>

using namespace std;
int ch[42],a,ans;
int main()
{
    for(int i=1;i<=10;i++){
        scanf("%d",&a);
        if(!ch[a%42]){
            ans++;
            ch[a%42]=1;
        }
    }

    cout<<ans;
    return 0;
}
