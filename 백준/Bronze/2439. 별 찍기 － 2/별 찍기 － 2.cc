#include <bits/stdc++.h>

using namespace std;
int n;
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((n-j)<i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
