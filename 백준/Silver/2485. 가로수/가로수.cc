#include<bits/stdc++.h>
using namespace std;
int n, cnt, x;
int a[100000], d[100000];
int f(int a, int b) {
	return(a%b)?f(b,a%b):b;
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n;
	for (int i=0;i<n;i++)
		cin >> a[i];
	sort(a, a+n);
	
	x = a[1] - a[0];
	for (int i=1;i<n-1;i++) 
		x = f(x, a[i + 1]-a[i]);

	for (int i=0;i<n-1;i++)
		cnt += ((a[i + 1]-a[i]) / x) - 1;	

	cout << cnt;
	return 0;
}