#include<bits/stdc++.h>
int main(){
    int n,ans=0;
    scanf("%d",&n);
    if(n%400==0)
        ans=1;
    else if(n%4==0&&n%100)
        ans=1;
    printf("%d",ans);
    return 0;
}