#include <bits/stdc++.h>

using namespace std;
int n, m;
char s[22];
int main()
{


    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        scanf("%s",&s);
        for(int j=0;j<strlen(s);j++)
            for(int k=0;k<m;k++)
                printf("%c",s[j]);
        printf("\n");
    }
    return 0;
}
