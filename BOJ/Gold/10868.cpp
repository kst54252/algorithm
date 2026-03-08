#include<bits/stdc++.h>
using namespace std;
int n, m, k, a, b;
int arr[1000001], min_tree[4000001];

int in_min(int s, int e, int node) {
    int m = (s+e)/2;
	if(s==e)
        return min_tree[node] = arr[s];
	
	return min_tree[node] = min(in_min(s, m, node*2), in_min(m+1, e, node*2+1));
} 

long long find_min(int s, int e, int node, int l, int r) { 
	int m = (s+e)/2;
    if(s > r || e < l)
        return INT_MAX;
	if(l<=s && e <= r)
        return min_tree[node];
    
	return min(find_min(s, m, node*2, l, r), find_min(m+1, e, node*2+1, l, r));
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;

    for(int i=0;i<n;i++)
        cin >> arr[i];

    in_min(0, n-1, 1);
    for(int i=0;i<m;i++){
        cin >> a >> b;
        cout << find_min(0, n-1, 1, a-1, b-1) <<"\n";
    }

    return 0;
}
