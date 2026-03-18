#include <bits/stdc++.h>
#define INF 2100000000
typedef long long ll;
using namespace std;
ll n, m, x, y, i;

struct POINT {
	ll x, y, cnt;

} arr[201][2002];
bool com(POINT a, POINT b){
    if(a.y != b.y)
        return a.y < b.y;
    return a.x < b.x;
}    
bool comp(POINT a, POINT b) {
	ll l = (b.x - arr[i][0].x)*(a.y -arr[i][0].y);
    ll r = (a.x - arr[i][0].x)*(b.y -arr[i][0].y);
    if(l!=r)
        return l < r;
    if(a.y != b.y)
        return a.y < b.y;
    return a.x < b.x;             
}

ll ccw(const POINT &A, const POINT &B, const POINT &C) {
	return 1LL * (A.x * B.y + B.x * C.y + C.x * A.y - B.x * A.y - C.x * B.y - A.x * C.y);
}

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n;
	for(i=0; i<n; i++) {
		cin >> m;

		for(int j=0; j<m; j++) {
			cin >> x >> y;
			arr[i][j].x=x;
			arr[i][j].y=y;
			arr[i][j].cnt=j;
		}

		sort(arr[i], arr[i]+m, com);

		sort(arr[i]+1, arr[i]+m, comp);
        int c=m-1;
        for(int j=c;j>=1;j--){
            if(ccw(arr[i][0],arr[i][j],arr[i][j-1])==0)
                c--;
            else
                break;
        }    
        
		for(int j=0; j<c; j++)
			cout << arr[i][j].cnt <<" ";
        for(int j=m-1;j>=c;j--)
            cout << arr[i][j].cnt <<" ";
            
		cout << "\n";
	}
	return 0;
}