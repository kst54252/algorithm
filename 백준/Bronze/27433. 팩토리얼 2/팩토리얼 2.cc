#include<bits/stdc++.h>
using namespace std;
long long n, ans=1;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n;
	for(int i=1;i<=n;i++)
        ans*=i;
    cout << ans;
		
}