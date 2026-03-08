#include<bits/stdc++.h>
using namespace std;
int n, m, k, a, x;
vector<int> v;
void binary_search_insertion(int a){
    int L = 0, R = v.size();
    while(L < R){
        if(v[(L+R)/2] < a)
            L = (L+R)/2+1;
        else
            R = (L+R)/2;
    }
    v.insert(v.begin()+L, a);
}
void binary_search(int a){
    int L = 0, R = v.size();
    while(L < R){
        if(v[(L+R)/2] < a)
            L = (L+R)/2+1;
        else
            R = (L+R)/2;
    }
    if(a==v[L])
        L++;
    cout<<v[L]<<"\n";
    v.erase(v.begin()+L);
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n >> m >> k;
    for(int i=0;i<m;i++){
        cin >> a;
        binary_search_insertion(a);
    }
    for(int i=0;i<k;i++){
        cin >> a;
        binary_search(a);
    }
}