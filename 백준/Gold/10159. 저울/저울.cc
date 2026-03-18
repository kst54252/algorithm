#include<iostream>
using namespace std;
int map[101][101];
int main()
{
	int n, m, a, b;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		map[a][b] = 1;
	}

	for (int k = 1; k <= n; k++)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (map[i][k] && map[k][j])map[i][j] = 1;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		int cnt = 0;
		for (int j = 1; j <= n; j++) {
			if (i == j)
                continue;
			if (map[i][j] == 0 && map[j][i] == 0)cnt++;
		}
		cout << cnt << endl;
	}
}