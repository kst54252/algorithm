#include <bits/stdc++.h>

using namespace std;
int n,m,a[44]={0,1,};
int main(){
    scanf("%d",&n);
    for(int i=2;i<44;i++)
        a[i]=a[i-1]+a[i-2];
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        if(m==0)
            printf("1 0\n");
        else
            printf("%d %d\n",a[m-1],a[m]);
    }

    return 0;
}
