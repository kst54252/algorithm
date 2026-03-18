#include<bits/stdc++.h>
using namespace std;
int n, m, a;
long long b, c, bb, cc;
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

    for(int i=0;i<m;i++){
        cin >> a >> b >> c;
        if(a == 1){
            update(0, n-1, 1, b-1, c-arr[b-1]);
            arr[b-1] = c;
        }
        else{
            bb = min(b, c);
            cc = max(b, c);
            cout << sum(0, n-1, 1, bb-1, cc-1)<<"\n";
        }
    }

    return 0;
}
