#include<bits/stdc++.h>
using namespace std;
int n, ans;
string s, s1;
map<string, bool> m;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> s >> s1;
		if (s == "ChongChong")
			m.insert({s, 1});
		else if (s1 == "ChongChong")
			m.insert({s1, 1});
		if (m[s]) m[s1] = 1;
		if (m[s1]) m[s] = 1;
	}

	for (pair<string,bool>v : m)
		if (v.second)
			ans++;

	cout << ans;
}