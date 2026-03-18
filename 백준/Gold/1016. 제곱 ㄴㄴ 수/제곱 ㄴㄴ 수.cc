#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long mn, mx;

	cin  >> mn >> mx;
	long long ans = mx - mn + 1;
    vector<bool> v(mx - mn + 1, false);
	long long i = 2;

	while (i * i <= mx) {


		long long sNum = mn / (i * i);

		if (mn % (i * i) != 0)
            sNum++;


		while (sNum * (i * i) <= mx) {
			if (v[sNum * (i * i) - mn] == false) {
				v[sNum * (i * i) - mn] = true;
				ans--;

			}
			sNum++;
		}
		i++;
	}

	printf("%d",ans);
	return 0;
}
