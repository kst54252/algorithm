#include<bits/stdc++.h>
using namespace std;
int n, m, k;
long long a, b, c, d, aa, bb;
long long arr[1000001], tree[4000001];
long long in(int s, int e, int node) {
    int m = (s+e)/2;
	if(s==e)
        return tree[node] = arr[s];
	
	return tree[node] = in(s, m, node*2) + in(m+1, e, node*2+1);
} 

long long sum(int s, int e, int node, int l, int r) { 
	int m = (s+e)/2;
    if(s > r || e < l)
        return 0;
	if(l<=s && e <= r)
        return tree[node];
    
	return sum(s, m, node*2, l, r) + sum(m+1, e, node*2+1, l, r);
}

void update(int s, int e, int node, int index, long long dif) { 
	int m = (s+e)/2;
    if(index < s || index > e)
        return;
	tree[node] += dif;
	if(s==e)
        return;
	update(s, m, node*2, index, dif);
	update(m+1, e, node*2+1, index, dif);
} 
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for(int i=0;i<n;i++)
        cin >> arr[i];

    in(0, n-1, 1);
    for(int i=0;i<m;i++){
        cin >> a >> b >> c >> d;
        aa = min(a,b);
        bb = max(a,b);
        cout << sum(0, n-1, 1, aa-1, bb-1)<<"\n";

        update(0, n-1, 1, c-1, d-arr[c-1]);
        arr[c-1] = d;      
    }
    return 0;
}
