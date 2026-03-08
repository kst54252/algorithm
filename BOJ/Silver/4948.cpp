#include<bits/stdc++.h>
using namespace std;
int x, a[300001]={0,1};
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	for(int i=2;i*i<300000;i++)
        if(!a[i])
            for(int j=i*2;j<=300000;j+=i)
                a[j] = 1;
    for(int i=1;i<=300000;i++)
        a[i]+=a[i-1];
    while(1){
        cin >> x;
        if(!x) break;
        cout<<x-a[x*2]+a[x]<<"\n";
    }
	return 0;
}