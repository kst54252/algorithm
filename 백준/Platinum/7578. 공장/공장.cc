#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, nm, c;
int a[500001], b[1000001];
ll ans, tree[4000001];

void update(int node, int s, int e, int x){
    if(s<=x&&x<=e){
        tree[node]+=1;
        if(s!=e){
            int m=s+(e-s)/2;
            update(node*2, s, m ,x);
            update(node*2+1, m+1, e, x);
        }     
    } 
}
ll sum(int node, int s, int e, int L, int R) {
    if(L > e || R < s)
        return 0;
    if(L <= s && e <= R)
        return tree[node];
    int m=s+(e-s)/2;    
    return sum(node*2, s, m, L, R) + sum(node*2+1, m+1, e ,L, R);
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=1;i<=n;i++)
        cin >> a[i];
    for(int i=1;i<=n;i++){
        cin >> c;
        b[c]=i;
    }
    for(int i=1;i<=n;i++){
        ans += sum(1, 1, n, b[a[i]]+1, n);
        update(1, 1, n, b[a[i]]);
    }
    cout << ans;
    return 0;
}
