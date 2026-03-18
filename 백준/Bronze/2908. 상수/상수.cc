#include <bits/stdc++.h>

using namespace std;
int a,b,aa,bb;
int main()
{
    scanf("%d %d",&a,&b);
    aa=(a%10)*100+((a/10)%10)*10+((a/100)%10);
    bb=(b%10)*100+((b/10)%10)*10+((b/100)%10);
    printf("%d",max(aa,bb));
    return 0;
}
