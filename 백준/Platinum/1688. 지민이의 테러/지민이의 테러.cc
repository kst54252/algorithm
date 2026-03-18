#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
struct line{
    pair<ll,ll>a, b;
}L[10001];

ll ccw(pair<ll, ll>p1, pair<ll, ll>p2, pair<ll, ll>p3) {
    ll s = p1.first * p2.second + p2.first * p3.second + p3.first * p1.second;
    s -= (p1.second * p2.first + p2.second * p3.first + p3.second * p1.first);
    if (s > 0)
        return 1;
    else if (s == 0)
        return 0;
    else
        return -1;
}
bool f(pair<pair<ll, ll>, pair<ll, ll>> l1, pair<pair<ll, ll>, pair<ll, ll>> l2) {

    pair<ll, ll>p1 = l1.first;
    pair<ll, ll>p2 = l1.second;
    pair<ll, ll>p3 = l2.first;
    pair<ll, ll>p4 = l2.second;

    ll p1p2 = ccw(p1, p2, p3) * ccw(p1, p2, p4);
    ll p3p4 = ccw(p3, p4, p1) * ccw(p3, p4, p2);

    if (p1p2 == 0 && p3p4 == 0) {

        if (p1 > p2) swap(p2, p1);
        if (p3 > p4) swap(p3, p4);
        return  (p1 <= p4 && p3 <= p2);
    }

    return (p1p2 <= 0 && p3p4 <= 0);

}
bool on_line(line a, ll x, ll y){
    if(ccw(a.a,{x,y},a.b)==0 && ((a.a.first<=x&&x<=a.b.first&&a.a.second<=y&&y<=a.b.second)||(a.a.first>=x&&x>=a.b.first&&a.a.second>=y&&y>=a.b.second)))
        return 1;
    return 0;
}
ll protect(ll x, ll y){
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(f({{x+1e9,y+1},{x,y}},{L[i].a, L[i].b}))
            cnt++;
        if(on_line(L[i], x, y))
            return 1;
    }
    return cnt%2;
}

int main(){
    pair<ll,ll> p[10001];
    ll x, y;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        p[i] = {x,y};
    }
    L[0].a = {x,y};
    L[0].b = p[0];
    for(int i=1;i<n;i++){
        L[i].a = p[i-1];
        L[i].b = p[i];
    }

    for(int i=0;i<3;i++){
        cin >> x >> y;
        cout << protect(x,y) <<"\n";
    }
}