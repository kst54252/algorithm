#include<bits/stdc++.h>
using namespace std;
char a[1002], b[1002];
int n, m, lcs[1001][1001];
stack<int> s;
void f(int x, int y){
    if(lcs[x][y] > 0){
        if(lcs[x][y] == lcs[x-1][y])
            f(x-1, y);
        else if(lcs[x][y] == lcs[x][y-1])
            f(x, y-1);
        else{
            s.push(a[x-1]);
            f(x-1,y-1);
        }
    }
}
int main(){
    scanf("%s",&a);
    scanf("%s",&b);
    n = strlen(a);
    m = strlen(b);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            if (a[i-1] == b[j-1])
                lcs[i][j] = lcs[i-1][j-1] + 1;
            else
                lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
        }
    printf("%d\n",lcs[n][m]);
    f(n,m);
    while(!s.empty()){
        printf("%c",s.top());
        s.pop();
    }
}