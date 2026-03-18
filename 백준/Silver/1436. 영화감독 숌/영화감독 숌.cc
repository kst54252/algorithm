#include <bits/stdc++.h>

using namespace std;
int n,cnt,ans,temp;
int main(){

    cin >> n;
    while (cnt != n)
	{
		ans++;
		temp = ans;

		while (temp >665)
		{
			if (temp % 1000 == 666)
			{
				cnt++;
				break;
			}
			else temp/=10;
		}
	}
	cout << ans;
    return 0;
}
