#include<bits/stdc++.h>
using namespace std;
int n, x, a, b;
deque<pair<int,int>> dq;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> x;
        dq.push_back({i, x});
    }
    for(int i=0;i<n;i++){
        a = dq.front().first;
        b = dq.front().second;
        cout << a <<" ";
        dq.pop_front();
        if(b > 0)
            for(int j=1;j<b;j++){
                dq.push_back(dq.front());
                dq.pop_front();
            }
        else
            for(int j=0;j<(-b);j++){
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
	return 0;
}