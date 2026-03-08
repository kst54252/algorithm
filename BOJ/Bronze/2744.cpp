#include<bits/stdc++.h>
using namespace std;
string a;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> a;
    for(int i=0;i<a.size();i++){
        if(a[i]>='a')
            printf("%c",a[i]-32);
        else
            printf("%c",a[i]+32);
    }
	return 0;
}