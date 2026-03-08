#include<bits/stdc++.h>
using namespace std;
int n;
char b[1000];
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&b);
        printf("%c%c\n",b[0],b[strlen(b)-1]);
    }
    return 0;
}
