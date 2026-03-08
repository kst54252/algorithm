#include<bits/stdc++.h>
using namespace std;
int n, m, k, a, b, c;
int arr[1000001], min_tree[4000001];

int in_min(int s, int e, int node) {
    int m = (s+e)/2;
	if(s==e)
        return min_tree[node] = arr[s];
	
	return min_tree[node] = min(in_min(s, m, node*2), in_min(m+1, e, node*2+1));
} 

int find_min(int s, int e, int node, int l, int r) { 
	int m = (s+e)/2;
    if(s > r || e < l)
        return INT_MAX;
	if(l<=s && e <= r)
        return min_tree[node];
    
	return min(find_min(s, m, node*2, l, r), find_min(m+1, e, node*2+1, l, r));
}
int min_update(int s, int e, int node, int index, int dif) { 
	int m = (s+e)/2;
    if(index < s || index > e)
        return min_tree[node];
	
	if(s==e)
        return min_tree[node] = dif;
    return min_tree[node] = min(min_update(s, m, node*2, index, dif), min_update(m+1, e, node*2+1, index, dif));
} 
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> arr[i];

    in_min(0, n-1, 1);

    cin >> m;
    for(int i=0;i<m;i++){
        cin >> a >> b >> c;
        if(a == 2)
            cout << find_min(0, n-1, 1, b-1, c-1) <<"\n";
        else
            min_update(0,n-1,1,b-1,c);
    }

    return 0;
}
