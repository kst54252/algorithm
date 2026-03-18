#include<bits/stdc++.h>
using namespace std;
double a[10][10];

int main(){
    //freopen("input.txt","r",stdin);
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		for(int j=0;j<=n;j++)
            scanf("%lf",&a[i][j]);

	for(int i=0;i<n;i++){
            
		double b = a[i][i];
    
		for(int j=i;j<=n;j++)
			a[i][j] /= b;

		for(int j=0;j<n;j++){

			if(i==j)
                continue;
			double b = a[j][i];

			for(int k=0;k<=n;k++)
				a[j][k]+=a[i][k]*(-b);

		}
	}
	for(int i=0;i<n;i++)
		printf("%.lf ",a[i][n]);
	
	return 0;
}
