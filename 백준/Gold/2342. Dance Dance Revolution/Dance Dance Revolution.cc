#include<bits/stdc++.h>
using namespace std;
int d[100001][5][5],n, i=1, ans;
int power[5][5]={{1,2,2,2,2},
                {INT_MAX,1,3,4,3},
                {INT_MAX,3,1,3,4},
                {INT_MAX,4,3,1,3},
                {INT_MAX,3,4,3,1}};
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    for(int j=0;j<=100000;j++)
        for(int x=0; x<5; x++) 
            for(int y=0; y<5; y++)
                d[j][x][y]=INT_MAX;
    d[0][0][0]=0;
    while(1){
        cin >> n;
        if(n == 0)
            break;
        for(int x=0; x<5; x++) 
            for(int y=0; y<5; y++){
                if(d[i-1][x][y]>=INT_MAX)
                    continue;
                int a = power[x][n];
                int b = power[y][n];
                d[i][x][n] = min(d[i][x][n], d[i-1][x][y] + b);
                d[i][n][y] = min(d[i][n][y], d[i-1][x][y] + a);
        }
        i++;
    }
    i--;
    int ans = INT_MAX;
    for(int x=0; x<5; x++)
        for(int y=0; y<5; y++)
            ans = min(ans, d[i][x][y]);

    cout<<ans<<" ";
	return 0;
}