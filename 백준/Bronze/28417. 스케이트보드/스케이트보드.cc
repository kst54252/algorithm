#include<bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,ans=0;
    cin >> n;
    vector<int> a(7);
    for(int i=0;i<n;i++){
        for(int j=0;j<7;j++)
            cin >> a[j];
        sort(a.begin()+2, a.end());
        ans = max(ans, max(a[0],a[1])+a[a.size()-1]+a[a.size()-2]);
    }
    cout << ans;
    return 0;
}