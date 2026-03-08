#include<bits/stdc++.h>
using namespace std;
int n,d[2501];
char s[2502];
bool f(int l, int r){
    int ch = 0;
    for (int i=l; i<=(l+r)/2; i++)
        if(s[i] != s[r+l-i]){
            ch = 1;
        }
    return ch;
}
int main(){
    scanf("%s",&s);
    n = strlen(s);
    for (int i=1;i<=n;i++){
        d[i] = d[i-1]+1;
        for (int j=i-1;j>=1;j--)
            if (!f(j-1,i-1)){
                d[i] = min(d[i],d[j-1]+1);
            }
    }
    printf("%d", d[n]);
    return 0;
}