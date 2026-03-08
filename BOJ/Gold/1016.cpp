#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long mn, mx;
	cin  >> mn >> mx;
	long long ans = mx - mn + 1;
    vector<bool> v(mx - mn + 1, false);
	long long i = 2;

	while (i * i <= mx){


		long long s = mn / (i * i);

		if(mn%(i*i) != 0)
            s++;


		while (s*(i*i)<= mx){
			if (v[s*(i*i)-mn] == false){
				v[s*(i*i)-mn] = true;
				ans--;
			}
			s++;
		}
		i++;
	}

	printf("%d",ans);
	return 0;
}
