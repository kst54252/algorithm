#include <bits/stdc++.h>
using namespace std;
int parent[10001],v,e,ans;
vector<pair<int, pair<int, int>>>vt;

int find(int x) {
	if (parent[x] == x)return x;
	else return parent[x] = find(parent[x]);
}
void f(int x, int y) {
	x = find(x);
	y = find(y);
	parent[y] = x;
}
bool sameparent(int x, int y) {
	x = find(x);
	y = find(y);
	if (x == y)
        return 1;
	else
        return 0;
}
int main() {
    //freopen("input.txt","r",stdin);
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	cin >> v >> e;
	int ans = 0;

	for (int i=0;i<e;i++){
		int a,b,c;
		cin >> a >> b >> c;
		vt.push_back({c,{a,b}});
	}


	sort(vt.begin(), vt.end());
	for (int i=1;i<=v;i++)
        parent[i] = i;

	for (int i=0;i<vt.size();i++) {
		if (!sameparent(vt[i].second.first, vt[i].second.second)) {
			f(vt[i].second.first, vt[i].second.second);
			ans += vt[i].first;
		}
	}
	cout << ans;
}
