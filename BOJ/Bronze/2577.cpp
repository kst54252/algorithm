#include <bits/stdc++.h>

using namespace std;
int a,b=1, ch[10];
int main()
{
    for(int i=0;i<3;i++){
        scanf("%d",&a);
        b*=a;
    }
    while(b>0){
        ch[b%10]++;
        b/=10;
    }
    for(int i=0;i<10;i++)
        printf("%d\n",ch[i]);
    return 0;
}
