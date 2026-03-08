#include <bits/stdc++.h>

using namespace std;
int n,t,sz=2,a[21][21];
void f(int x,int y){
    mn = 9999999;
    for(int k=1;k<=n;k++)
        for(int i=x-k;i<=x+k;i++)
            for(int j=y-k;j<=y+k;j++)
                if(i>0&&i<=n&&j>0&&j<=n)
                    if(!ch[i][j] && sz>=a[i][j])

    return;

}



int main(){
    int x,y;
    cin >> n;
    for(int i=1;i<n;i++)
        for(int j=1;j<m;j++){
            scanf("%d",%a[i][j]);

            if(a[i][j]==9){
                x=i;
                y=j;
            }
        }


    f(x,y);

    printf("%d",t);
    return 0;

}
