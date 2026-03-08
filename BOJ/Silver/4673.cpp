#include<bits/stdc++.h>
int a[10001];
int f(int n){
    int nn = n;
    while(nn){
        n+=nn%10;
        nn/=10;
    }
    return n;
}
int main(){
    int x;
    for(int i=0;i<10000;i++){
        x=f(i);
        if(x<10000)
            a[x]=1;
    }
    for(int i=0;i<10000;i++)
        if(!a[i])
            printf("%d\n",i);
}