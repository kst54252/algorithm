#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct POINT{
    ll x, y;
    int x_d=1, y_d=0;
    bool convex=0;
}arr[100001];

bool com(POINT &p, POINT &q){
    if(1LL * p.y_d * q.x_d != 1LL * p.x_d * q.y_d)
        return  1LL * p.y_d * q.x_d < 1LL * p.x_d * q.y_d;
    if(p.x != q.x)
        return p.x < q.x;
    return p.y < q.y;
}
ll ccw(const POINT &A, const POINT &B, const POINT &C){
    return 1LL * (A.x * B.y + B.x * C.y + C.x * A.y - B.x * A.y - C.x * B.y - A.x * C.y);
}
ll a, b, n, nn;
char c;
vector<POINT> ans, R;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b >> c;
        arr[i].x = a;
        arr[i].y = b;
        if(c == 'Y'){
            arr[i].convex = 1;
            nn++;
        }
    }
    sort(arr, arr+n, com);

    for(int i=1;i<n;i++){
        arr[i].x_d = arr[i].x - arr[0].x;
        arr[i].y_d = arr[i].y - arr[0].y;
    }
    sort(arr+1, arr+n, com);

    for (int i=0;i<n;i++)
        if(arr[i].convex){
            while ((ans.size() >= 2) && (ccw(ans[ans.size() - 2], ans.back(), arr[i]))<0) {
                R.push_back(ans.back());
                ans.pop_back();
            };
            ans.push_back(arr[i]);
    }
    for (int i = R.size() - 1; i >= 0; i--) {
        ans.push_back(R[i]);
    }

    cout << ans.size() <<"\n";
    for(int i=0;i<ans.size();i++)
        cout << ans[i].x <<" "<< ans[i].y <<"\n";

    return 0;
}