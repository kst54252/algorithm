#include<bits/stdc++.h>

using namespace std;

int n,mx;
int a[1000][1000], ch[1000][1000], cnt[1000];


int main() {

    //freopen("input.txt","r",stdin);

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < 5; j++)
			scanf("%d", &a[i][j]);


	for (int j = 0; j < 5; j++)
		for (int i = 0; i < n; i++)
			for(int k=0;k<n;k++)
                if(i!=k && a[i][j]==a[k][j])
                    ch[i][k]=1;


	for (int i = 0; i < n; i++)
		mx = max(mx, cnt[i]);

    for (int i = 0; i < n; i++)
        if(mx==cnt[i]){
            printf("%d",i+1);
            break;
        }

}
