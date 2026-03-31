#include <bits/stdc++.h>
using namespace std;
typedef __int128_t int128;

struct POINT{
    long long x, y;
    long long x_d, y_d;
    long long dx, dy;
} initial_arr[30005], arr[30005];

bool com(const POINT &p, const POINT &q){
    int128 left = (int128)p.y_d * q.x_d;
    int128 right = (int128)p.x_d * q.y_d;
    if(left != right)
        return left < right;
    if(p.y != q.y)
        return p.y < q.y;
    return p.x < q.x;
}

int128 ccw(const POINT &A, const POINT &B, const POINT &C){
    return (int128)A.x * B.y + (int128)B.x * C.y + (int128)C.x * A.y - (int128)B.x * A.y + (int128)C.x * B.y + (int128)A.x * C.y;
}

int128 dist(POINT p, POINT q){
    int128 dx = p.x - q.x;
    int128 dy = p.y - q.y;
    return dx * dx + dy * dy;
}


int128 max_dist(long long t, int n){
    if(n == 1)
        return 0;

    for (int i=0;i<n;i++){
        arr[i].x = initial_arr[i].x + initial_arr[i].dx * t;
        arr[i].y = initial_arr[i].y + initial_arr[i].dy * t;
        arr[i].x_d = 0;
        arr[i].y_d = 0;
    }

    int min_idx = 0;
    for(int i=1;i<n;i++) 
        if (arr[i].y < arr[min_idx].y || (arr[i].y == arr[min_idx].y && arr[i].x < arr[min_idx].x))
            min_idx = i;

    swap(arr[0], arr[min_idx]);

    for (int i=1;i<n;i++){
        arr[i].x_d = arr[i].x - arr[0].x;
        arr[i].y_d = arr[i].y - arr[0].y;
    }
    sort(arr + 1, arr + n, com);

    vector<int> s;
    s.push_back(0);
    s.push_back(1);
    for (int i=2;i<n;i++){
        while (s.size() >= 2){
            int second = s.back();
            s.pop_back();
            int first = s.back();
            if(ccw(arr[first], arr[second], arr[i]) > 0){
                s.push_back(second);
                break;
            }
        }
        s.push_back(i);
    }

    if(s.size() == 2)
        return dist(arr[s[0]], arr[s[1]]);

    int128 max_d = 0;
    int j = 1;
    for(int i=0;i<s.size();i++){
        int ni = (i + 1) % s.size();
        while(1){
            int nj = (j + 1) % s.size();
            int128 v1x = arr[s[ni]].x - arr[s[i]].x, v1y = arr[s[ni]].y - arr[s[i]].y;
            int128 v2x = arr[s[nj]].x - arr[s[j]].x, v2y = arr[s[nj]].y - arr[s[j]].y;
            
            if(v1x * v2y - v1y * v2x > 0)
                j = nj;
            else
                break;
        }
        max_d = max(max_d, dist(arr[s[i]], arr[s[j]]));
        max_d = max(max_d, dist(arr[s[ni]], arr[s[j]]));
    }
    return max_d;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int n;
    long long T;
    cin >> n >> T;
    for(int i=0;i<n;i++)
        cin >> initial_arr[i].x >> initial_arr[i].y >> initial_arr[i].dx >> initial_arr[i].dy;
    
    long long lo = 0, hi = T;
    while(hi - lo >= 3){
        long long p = (lo * 2 + hi) / 3, q = (lo + hi * 2) / 3;
        if(max_dist(p, n) <= max_dist(q, n))
            hi = q;
        else lo = p;
    }

    long long ans_t = lo;
    int128 ans_dist = max_dist(lo, n);
    for(long long i = lo + 1; i <= hi; i++){
        int128 cur = max_dist(i, n);
        if(cur < ans_dist){
            ans_dist = cur;
            ans_t = i;
        }
    }

    cout << ans_t << "\n" << (long long)ans_dist ;
    
    return 0;
}