#include<bits/stdc++.h>
using namespace std;

struct POINT{
    long long x, y;
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
    
    stack<int> s;

    s.push(0);
    s.push(1);
    int cnt = 2;
    while(cnt < n){
        while(s.size() >= 2){
            int first, second;
            second = s.top();
            s.pop();
            first = s.top();

            if(ccw(arr[first], arr[second], arr[cnt])){
                s.push(second);
                break;
            }
        }
        s.push(cnt++);
    }
    cout << s.size();
    return 0;
}