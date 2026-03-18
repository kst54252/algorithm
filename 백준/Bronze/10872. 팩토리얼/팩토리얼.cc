#include <bits/stdc++.h>

using namespace std;
int n;
void f(int m,int p){
    if(p==n)
        printf("%d",m);
    else
        f(m*(p+1),p+1);

}
int main()
{
    scanf("%d",&n);
    f(1,0);
    return 0;
}
