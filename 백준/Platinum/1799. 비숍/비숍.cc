#include<bits/stdc++.h>
using namespace std;

int n, ans[2], ans_cnt;
int a[11][11], r[21], l[21];

void f(int x, int y, int cnt){
    ans[ans_cnt] = max(ans[ans_cnt], cnt);
	if (y >= n){
        x++;
        y % 2 == 0 ? y=1 : y=0;
    }
	if (x >= n)
        return;
	if (a[x][y] && !l[x + y] && !r[x - y + n]) {
		l[x + y] = r[x - y + n] = 1;
		f(x, y + 2, cnt + 1);
		l[x + y] = r[x - y + n] = 0;
	}
	f(x, y + 2, cnt);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            cin >> a[i][j];
    f(0, 0, 0);
    ans_cnt=1;
    f(0, 1, 0);
    cout << ans[0]+ans[1];
}