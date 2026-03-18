#include <bits/stdc++.h>

using namespace std;
int n,a,b;
vector<pair<int,int>> v;
vector<int> LIS,p,ans;
vector<int>::iterator it;

int main()
{
    //freopen("input.txt","r",stdin);
    cin >>n;
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());

    LIS.push_back(v[0].second);
    p.push_back(0);

    for(int i=1;i<n;i++){
        int m=v[i].second;
        if(LIS.back() < m){
            p.push_back(LIS.size());
            LIS.push_back(m);
        }
        else{
            it = lower_bound(LIS.begin(),LIS.end(),m);
            *it=m;
            p.push_back(it-LIS.begin());
        }

    }
    cout << n-LIS.size() << "\n";

    int cur = LIS.size() - 1;
	for (int i = p.size() - 1; i >= 0; i--){

		if (cur == p[i])
            cur--;

		else
            ans.push_back(v[i].first);
	}

	for (int i = ans.size() - 1; i >= 0; i--)
		cout << ans[i] << "\n";


    return 0;
}
