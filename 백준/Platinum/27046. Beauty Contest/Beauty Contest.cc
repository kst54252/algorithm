#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct POINT{
    ll x, y;
    int x_d, y_d;
}arr[100001];

bool com(POINT &p, POINT &q){
    if(1LL * p.y_d * q.x_d != 1LL * p.x_d * q.y_d)
        return  1LL * p.y_d * q.x_d < 1LL * p.x_d * q.y_d;
    if(p.y != q.y)
        return p.y < q.y;
    return p.x < q.x;
}
bool ccw(const POINT &A, const POINT &B, const POINT &C){
    return (1LL * (A.x * B.y + B.x * C.y + C.x * A.y - B.x * A.y - C.x * B.y - A.x * C.y)) > 0;
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a, b, n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        arr[i].x = a;
        arr[i].y = b;
    }
    
    sort(arr, arr+n, com);

    for(int i=1;i<n;i++){
        arr[i].x_d = arr[i].x - arr[0].x;
        arr[i].y_d = arr[i].y - arr[0].y;
    }
    sort(arr+1, arr+n, com);
    
    vector<int> s;

    s.push_back(0);
    s.push_back(1);
    ll cnt = 2, j=1;
    while(cnt < n){
        while(s.size() >= 2){
            int first, second;
            second = s[s.size()-1];
            s.pop_back();
            first = s[s.size()-1];

            if(ccw(arr[first], arr[second], arr[cnt])){
                s.push_back(second);
                break;
            }
        }
        s.push_back(cnt++);
    }
    if(s.size() == 2){
        cout << fixed << setprecision(10) << (arr[s[0]].x-arr[s[1]].x)*(arr[s[0]].x-arr[s[1]].x)+(arr[s[0]].y-arr[s[1]].y)*(arr[s[0]].y-arr[s[1]].y);
        return 0;
    }
    ll ans = 0.0;
    for(int i=0;i<s.size();i++){
        ll n_i = (i+1) % s.size();
        while(1){
            ll n_j = (j+1) % s.size();
            POINT v1, v2;
            v1.x = arr[s[n_i]].x - arr[s[i]].x;
            v1.y = arr[s[n_i]].y - arr[s[i]].y;

            v2.x = arr[s[n_j]].x - arr[s[j]].x;
            v2.y = arr[s[n_j]].y - arr[s[j]].y;

            int cross = v1.x * v2.y - v1.y * v2.x;
            if(cross > 0)
                j = n_j;
            else
                break;
        }
        ans = max(ans, ((arr[s[i]].x-arr[s[j]].x)*(arr[s[i]].x-arr[s[j]].x)+(arr[s[i]].y-arr[s[j]].y)*(arr[s[i]].y-arr[s[j]].y)));
    }
    cout << ans;
    return 0;
}