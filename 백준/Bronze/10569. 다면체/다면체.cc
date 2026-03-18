#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, a, b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		cout << 2 + b - a <<"\n";
	}
	return 0;
}