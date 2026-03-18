#include <bits/stdc++.h>

using namespace std;
int n,m,ans,aa,mn,w;
int a[752][752],dr[752][752],dl[752][752];
char s[760];
int main()
{
    //freopen("input.txt","r",stdin);
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){

        scanf("%s",&s);

        for(int j=0;j<m;j++)
            a[i][j+1]=s[j]-'0';
    }

    for(int i=n;i>=1;i--)
        for(int j=m;j>=1;j--)
            if(a[i][j])
                dr[i][j]=a[i][j]+dr[i+1][j+1];

    for(int i=n;i>=1;i--)
        for(int j=1;j<=m;j++)
            if(a[i][j])
                dl[i][j]=a[i][j]+dl[i+1][j-1];

     for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(a[i][j]){
				ans=max(ans, 1);
                int aa = min(dl[i][j], dr[i][j]);
                while(aa > 1){
                    if(dr[i+aa-1][j-aa+1] >= aa && dl[i+aa-1][j+aa-1]>=aa){
                        ans = max(ans,aa);
                    }
                    aa--;
                }
			}
		}
	}

    printf("%d",ans);


    return 0;
}
