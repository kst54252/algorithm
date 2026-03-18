#include <bits/stdc++.h>

using namespace std;
int a,b,c;
int main()
{
    scanf("%d %d %d",&a,&b,&c);
    a+=c/60;
    b+=c%60;
    a+=b/60;
    a=a%24;
    b=b%60;
    printf("%d %d",a,b);
    return 0;
}
