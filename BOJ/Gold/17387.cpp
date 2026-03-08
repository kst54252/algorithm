#include<bits/stdc++.h>
using namespace std;
int ccw(pair<long long, long long>p1, pair<long long, long long>p2, pair<long long, long long>p3) {
    long long s = p1.first * p2.second + p2.first * p3.second + p3.first * p1.second;
    s -= (p1.second * p2.first + p2.second * p3.first + p3.second * p1.first);
    if (s > 0)
        return 1;
    else if (s == 0)
        return 0;
    else
        return -1;
}
bool f(pair<pair<int, int>, pair<int, int>> l1, pair<pair<int, int>, pair<int, int>> l2) {

    pair<int, int>p1 = l1.first;
    pair<int, int>p2 = l1.second;
    pair<int, int>p3 = l2.first;
    pair<int, int>p4 = l2.second;

    int p1p2 = ccw(p1, p2, p3) * ccw(p1, p2, p4);
    int p3p4 = ccw(p3, p4, p1) * ccw(p3, p4, p2);

    if (p1p2 == 0 && p3p4 == 0) {

        if (p1 > p2) swap(p2, p1);
        if (p3 > p4) swap(p3, p4);
        return  (p1 <= p4 && p3 <= p2);
    }

    return (p1p2 <= 0 && p3p4 <= 0);

}
int main(){
    int a,a1,b,b1,c,c1,d,d1;
    cin >> a >> a1 >> b >> b1;
    cin >> c >> c1 >> d >> d1;
    cout << f({{a,a1},{b,b1}},{{c,c1},{d,d1}});
}