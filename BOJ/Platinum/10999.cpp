#include<bits/stdc++.h>
using namespace std;
int n, m, k;
long long a, b, c, d;
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

void update(int s, int e, int node, int l, int r, long long dif) { 
	int m = (s+e)/2;
    if(r < s || l > e) return;
	
	if(s==e){
        tree[node] += dif;
        return;
    }
	update(s, m, node*2, l, r, dif);
	update(m+1, e, node*2+1, l, r, dif);
    tree[node] = tree[node*2] + tree[node*2+1];
} 
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m >> k;
    for(int i=0;i<n;i++)
        cin >> arr[i];

    in(0, n-1, 1);
    for(int i=0;i<m+k;i++){
        cin >> a >> b >> c;
        if(a == 1){
            cin >> d;
            for(int j=b-1;j<c;j++)
                arr[j] += d;
            
            update(0, n-1, 1, b-1, c-1, d);
        }
        else
            cout << sum(0, n-1, 1, b-1, c-1)<<"\n";
    }

    return 0;
}
