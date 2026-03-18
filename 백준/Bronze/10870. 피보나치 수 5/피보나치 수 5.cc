#include <bits/stdc++.h>

using namespace std;
int n;
int f(int nm){
    if(nm==0)
        return 0;
    else if(nm==1)
        return 1;
    else
        return f(nm-1)+f(nm-2);
}
int main()
{
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}
