#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, nm;
ll arr[1000001], tree[4000001];

void update(int node, int s, int e, int x, ll add){
    if(x<s||x>e)
        return;
        
    if(s==e){
        tree[node] += add;
        return;
    }
    int m=(s+e)/2;
    update(node*2, s, m, x, add);
    update(node*2+1, m+1, e, x, add);
    tree[node] = tree[node*2]+tree[node*2+1];
}
 
ll find(int node, int s, int e, int x){
    if(s==e)
        return e;
    int m=(s+e)/2;
    
    if(tree[node*2] >= x)
        return find(node*2, s, m, x);
    else
        return find(node*2+1, m+1, e, x-tree[node*2]);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    ll a, b, c;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a==1){
            cin >> b;
            nm=find(1, 1, 1000001, b);
            cout << nm <<"\n";
            update(1, 1, 1000001, nm, -1);
            arr[nm]--;
        }
        else{
            cin >> b >> c;
            update(1, 1, 1000001, b, c);
            arr[b] += c;
        }
    }
    return 0;
}
 