#include<bits/stdc++.h>
int a[101][101],n,x,y,ans;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        for(int j=x;j<x+10;j++)
            for(int k=y;k<y+10;k++)
                a[j][k]=1;
    }
    for(int i=1;i<=100;i++)
        for(int j=1;j<=100;j++)
            if(a[i][j])
                ans++;
    printf("%d",ans);
	return 0;
}