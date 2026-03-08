#include <bits/stdc++.h>
using namespace std;
struct com {
	bool operator() (string& s1, string& s2) {
		return (s1 + s2 > s2 + s1);
	}
};

priority_queue<string,vector<string>,com> pq;
string s; 

int n;

int main() {

	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
	for(int i=0;i<n;i++){
        cin >> s;
		pq.push(s);
	}

	while(!pq.empty()) {
		string cur = pq.top();
        pq.pop();
		cout << cur[0];
		int curlen = cur.length();
		if (curlen > 1) pq.push(cur.substr(1, curlen - 1));
	}
    
}