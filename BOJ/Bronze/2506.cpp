#include <stdio.h>
int main(void){int n, i; int a[101],t=0,c= 0;scanf("%d", &n);for(i=0;i<n;i++)scanf("%d", &a[i]);if(a[0] == 1)c+= 1;t+= 1;for(i=1;i<n;i++){if(a[i]== 0)c=0;else if(a[i] == 1){c += 1;t+= c;}}printf("%d",t);return 0;}
