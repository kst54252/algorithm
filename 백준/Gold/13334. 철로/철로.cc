#include<bits/stdc++.h>
using namespace std;
int n, d, a, b, t, ans, cur;
vector<pair<int,int>> v;
priority_queue<int,vector<int>,greater<int>> pq;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        v.push_back({max(a,b), min(a,b)});
    }
    cin >> d;
    sort(v.begin(),v.end());

    for(int i=0; i<v.size(); i++){
        int start = v[i].second;
        int end = v[i].first;
        
        if(end-start <= d)
            pq.push(start);
        else
            continue;
        
        while(!pq.empty()){
            if(pq.top() < end-d)
                pq.pop();
            else{
                ans = max(ans, (int)pq.size());
                break;
            }
        }
    }
    cout << ans;
}