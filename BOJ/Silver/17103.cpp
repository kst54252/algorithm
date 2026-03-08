#include<bits/stdc++.h>
using namespace std;
int n, x, cnt, a[1000001]={0,1};
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	for(int i=2;i*i<1000000;i++)
        if(!a[i])
            for(int j=i*2;j<=1000000;j+=i)
                a[j] = 1;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        cnt = 0;
        for(int j=1;j<=x/2;j++){
            if(!(a[j]+a[x-j]))
                cnt++;
        }
        cout << cnt << "\n";
    }
	return 0;
}