#include <bits/stdc++.h>

using namespace std;
int n,m;
int a[1001][1001],dist[1001][1001][2];
int xx[4]={0,0,1,-1},yy[4]={1,-1,0,0};
queue <pair<pair<int, int>, int>> q;
int main(){
    //freopen("input.txt","r",stdin);
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n >> m;
    string s;
    for(int i=0;i<n;i++){
        cin >> s;
        for(int j=1;j<=m;j++)
            a[i+1][j]=s[j-1]-'0';
    }

	q.push({{1,1},0});
	dist[1][1][0] = 1;

	while (!q.empty()) {
		int x = q.front().first.first;
		int y = q.front().first.second;
		int w = q.front().second;
		q.pop();

		if (x == n && y == m){
            cout << dist[x][y][w];
            return 0;
		}

		for (int i=0;i<4;i++) {

			int nx=x+xx[i];
			int ny=y+yy[i];

			if (nx >= 1 && nx <= n && ny >= 1 && ny <= m) {

				if (a[nx][ny] == 0 && dist[nx][ny][w] == 0) {
					dist[nx][ny][w] = dist[x][y][w] + 1;
					q.push({{ nx,ny },w});
				}

				if (a[nx][ny]==1 && w==0) {
					dist[nx][ny][w+1] = dist[x][y][w]+1;
					q.push({{nx,ny},w+1});
				}
			}
		}
	}
    cout << "-1";

    return 0;
}
