#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct POINT{
    ll x, y;
}arr[3];

ll ccw(const POINT &A, const POINT &B, const POINT &C){
    int a=(A.x * B.y + B.x * C.y + C.x * A.y - B.x * A.y - C.x * B.y - A.x * C.y);
    if(a>0)
        return 1;
    else if(a==0)
        return 0;
    else
        return -1;
}
ll a, b;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    for(int i=0;i<3;i++){
        cin >> a >> b;
        arr[i].x = a;
        arr[i].y = b;
    }
    cout<<ccw(arr[0],arr[1],arr[2]);
    return 0;
}