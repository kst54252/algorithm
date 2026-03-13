#include<bits/stdc++.h>
using namespace std;
int n, m;
long long a, b, c, d;
long long arr[1000001], tree[4000001], lazy[4000001];
long long in(int s, int e, int node) {
    int m = (s+e)/2;
	if(s==e)
        return tree[node] = arr[s];
	
	return tree[node] = in(s, m, node*2) + in(m+1, e, node*2+1);
} 
void update_lazy(int s, int e, int node){
    if(lazy[node] != 0){
        tree[node] += (e - s + 1) * lazy[node];
        if(s != e){
            lazy[node * 2] += lazy[node];
            lazy[node * 2 + 1] += lazy[node];
        }
        lazy[node] = 0;
    }
}
long long sum(int s, int e, int node, int l, int r) { 
	update_lazy(s, e, node);
    if(s > r || e < l)
        return 0;
	if(l<=s && e <= r)
        return tree[node];
    int m = (s+e)/2;
	return sum(s, m, node*2, l, r) + sum(m+1, e, node*2+1, l, r);
}
void update(int s, int e, int node, int l, int r, long long dif) { 
	update_lazy(s, e, node);
    if(r < s || l > e) return;
	
	if(l <= s && e <= r){
        tree[node] += (e - s + 1) * dif;
        if(s != e){
            lazy[node * 2] += dif;
            lazy[node * 2 + 1] += dif;
        }
        return;
    }
    int m = (s+e)/2;
	update(s, m, node*2, l, r, dif);
	update(m+1, e, node*2+1, l, r, dif);
    tree[node] = tree[node*2] + tree[node*2+1];
} 

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> arr[i];
    cin >> m;
    in(0, n-1, 1);
    for(int i=0;i<m;i++){
        cin >> a;
        if(a == 1){
            cin >> b >> c >> d;
            
            update(0, n-1, 1, b-1, c-1, d);
        }
        else{
            cin >> b;
            cout << sum(0, n-1, 1, b-1, b-1)<<"\n";
        }
    }

    return 0;
}
