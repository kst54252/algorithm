#include<bits/stdc++.h>
using namespace std;
long long n, m, k, a, b, c;
long long arr[1000001], tree[4000001];

long long in(int s, int e, int node) {
    int m = (s+e)/2;
	if(s==e)
        return tree[node] = arr[s] % 1000000007;
	
	return tree[node] = (in(s, m, node*2) * in(m+1, e, node*2+1)) % 1000000007;
} 

long long f(int s, int e, int node, int l, int r) { 
	int m = (s+e)/2;
    if(s > r || e < l)
        return 1;
	if(l<=s && e <= r)
        return tree[node];
    
	return (f(s, m, node*2, l, r) * f(m+1, e, node*2+1, l, r))% 1000000007;
}
long long update(int s, int e, int node, int index, long long num) { 
	int m = (s+e)/2;
    if(index < s || index > e)
        return tree[node];
    if(s==e)
        return tree[node] = num;
    return
        tree[node] = (update(s, m, node*2, index, num) * update(m+1, e, node*2+1, index, num))%1000000007;
} 

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m >> k;
    for(int i=0;i<n;i++)
        cin >> arr[i];

    in(0, n-1, 1);
    for(int i = 0; i < m + k; i++){
        cin >> a >> b >> c;
        if(a == 1){  
            update(0, n-1, 1, b-1, c);
            arr[b-1] = c;
        }
        else
            cout << f(0, n-1, 1, b-1, c-1) % 1000000007 << "\n";
    }

    return 0;
}
