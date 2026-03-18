#include<bits/stdc++.h>
using namespace std;
char a[102], b[102], c[102];
int n, m, p, lcs[101][101][101];
int main(){
    scanf("%s",&a);
    scanf("%s",&b);
    scanf("%s",&c);
    n = strlen(a);
    m = strlen(b);
    p = strlen(c);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            for(int k=1;k<=p;k++){
                if (a[i-1] == b[j-1] && a[i-1] == c[k-1])
                    lcs[i][j][k] = lcs[i-1][j-1][k-1] + 1;
                else
                    lcs[i][j][k] = max(lcs[i-1][j][k], max(lcs[i][j-1][k], lcs[i][j][k-1]));
        }
    printf("%d\n",lcs[n][m][p]);
}