#include<bits/stdc++.h>
using namespace std;
int n, nn;
string s;
map<string, int> m;
bool com(pair<string, int> p, pair<string, int> q){
    if(p.second != q.second)
        return p.second > q.second;
    else{
        if(p.first.size() != q.first.size())
            return p.first.size() > q.first.size();
        else
            return p.first < q.first;
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n >> nn;
	for(int i=0;i<n;i++){
		cin >> s;
		if(s.size() >= nn)
            m[s]++;
	}
    vector<pair<string, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), com);
    for(auto& i : v)
        cout << i.first <<"\n";
}