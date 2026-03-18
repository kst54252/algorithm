#include <bits/stdc++.h>

using namespace std;
int a,m,x;
int main()
{
    for(int i=1;i<=9;i++){
        scanf("%d",&a);
        if(m<=a){
            m=a;
            x=i;
        }
    }

    cout<<m<<"\n"<<x;
    return 0;
}
