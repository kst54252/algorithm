#include<bits/stdc++.h>

using namespace std;
int n, a, b, arr[101][101], dp[101][101];
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
    	cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
	}

    for (int i=1; i<=100; i++)
        for (int j=i; j>=1; j--)
            for (int k=j; k<i; k++)
                dp[j][i] = max(dp[j][i], dp[j][k] + dp[k][i] + arr[i][j]);

    cout << dp[1][100];


}