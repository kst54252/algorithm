#include<bits/stdc++.h>
using namespace std;

struct POINT{
    long long x, y;
    long long x_d, y_d;
    POINT(int x1 = 0, int y1 = 0) : x(x1), y(y1), x_d(1), y_d(0){}
};

bool com(POINT &p, POINT &q){
    if(1LL * p.y_d * q.x_d != 1LL * p.x_d * q.y_d)
        return  1LL * p.y_d * q.x_d < 1LL * p.x_d * q.y_d;
    if(p.y != q.y)
        return p.y < q.y;
    return p.x < q.x;
}
long long ccw(POINT &A, POINT &B, POINT &C){
    return 1LL * (A.x * B.y + B.x * C.y + C.x * A.y - B.x * A.y - C.x * B.y - A.x * C.y);
}
double dist(double a, double b, double c, double d, double e, double f) {
    double dx = c - a;
    double dy = d - b;
    double lineLength = sqrt(dx * dx + dy * dy);
    double APx = e - a;
    double APy = f - b;
    double u_x = dx / lineLength;
    double u_y = dy / lineLength;
    double dotProduct = APx * u_x + APy * u_y;
    double distance = fabs((dy * (e - a)) - (dx * (f - b))) / lineLength;
    return distance;
}
POINT arr[100002];
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long a, b, n, r;
    int case_cnt=0;
    while(1){
        case_cnt++;
        cin >> n;
        if(!n)
            break;
        for(int i=0;i<n;i++){
            cin >> a >> b;
            arr[i] = POINT(a,b);
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
    
                if(ccw(arr[first], arr[second], arr[cnt]) > 0){
                    s.push(second);
                    break;
                }
            }
            s.push(cnt++);
        }
        vector<pair<int,int>>vv;
        while(!s.empty()){
            vv.push_back({arr[s.top()].x,arr[s.top()].y});
            s.pop();
        }
        int cc=0;
        vv.push_back(vv[0]);
        double ans=2100000000;
        for(int k=1;k<vv.size();k++){
            double mx=0;
            for(int t=0;t<vv.size();t++)
                if(t!=k && t!= k-1)
                    mx = max(mx, dist(vv[k-1].first, vv[k-1].second, 
                    vv[k].first, vv[k].second, vv[t].first, vv[t].second));
            ans = min(ans, mx);
        }
        cout<<fixed;
        cout.precision(2);
        cout << "Case "<<case_cnt<<": "<<ceil(ans*100)/100 <<"\n";
    }
    return 0;
}