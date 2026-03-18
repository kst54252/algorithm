#include<bits/stdc++.h>
using namespace std;
map<int,int> m;
int n,nn,a;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        if(m.find(a)!=m.end())
            m[a]++;
        else
            m.insert({a,1});
    }
    cin >> nn;
    for(int i=0;i<nn;i++){
        cin >> a;
        if(m.find(a)!=m.end())
            cout<<m[a]<<" ";
        else
            cout<<"0 ";
    }
    return 0;
}
