#include<bits/stdc++.h>>
using namespace std;
long long n, check[10];

void calc(long long n, long long ten){
	while (n > 0) {
		check[n % 10] += ten;
		n /= 10;
	}
}

void solve(long long a, long long b, long long ten) {
	while (a % 10 != 0 && a <= b){
        calc(a, ten);
		a++;
	}
	if(a > b)
        return;
	while((b%10) != 9 && b >= a){
		calc(b, ten);
		b--;
	}
	long long cnt = b/10 - a/10 + 1;

	for (int i=0;i<10;i++)
		check[i] += cnt*ten;

	solve(a/10, b/10, ten*10);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    solve(1,n,1);
    for(int i=0;i<10;i++)
        cout << check[i] <<" ";
}