#include<bits/stdc++.h>
using namespace std;
int n, m, x, t, a[100001];
deque<int>d;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
	for(int i=0;i<n;i++){
        cin >> x;
        if(!a[i])
            d.push_back(x);
    }
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> x;
        d.push_front(x);
        cout << d.back() <<" ";
        d.pop_back();
    }
    return 0;
}