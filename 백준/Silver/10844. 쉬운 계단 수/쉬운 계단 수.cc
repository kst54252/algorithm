#include<bits/stdc++.h>
using namespace std;
long long n,a[101][10],sum[101];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
	for (int i=1;i<10;i++) 
		a[1][i] = 1;
	
	for(int j=2;j<=n;j++)
		for (int i=0;i<10;i++) {
			if (i == 0) 
				a[j][i] = a[j-1][i+1] % 1000000000;
			
			else if (i > 0 && i < 9) 
				a[j][i] = a[j-1][i-1] % 1000000000 + a[j-1][i+1] % 1000000000;
			
			else
				a[j][i] = a[j-1][i-1] % 1000000000;
		}
	
	for (int i=0;i<10;i++)
		sum[n] += a[n][i];
	
	sum[n] = sum[n] % 1000000000;

	printf("%d", sum[n]);
}

