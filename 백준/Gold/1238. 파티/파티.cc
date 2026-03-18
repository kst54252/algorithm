#include <bits/stdc++.h>
#define INF 2100000000
using namespace std;
int a,b,c,v,e,start,mx;
int dist[10001],d[10001],ch[10001];

vector<pair<int,int>> vt[10001],vv[10001];
priority_queue<pair<int,int>> pq;

int main(){
    //freopen("input.txt","r",stdin);

    cin >> v >> e >> start;

    for(int i=0;i<=v;i++){
        dist[i]=INF;
        d[i]=INF;
    }
    dist[start]=0;
    d[start]=0;
    for(int i=0;i<e;i++){
        cin >> a >> b >> c;
        vt[a].push_back(make_pair(b,c));
        vv[b].push_back(make_pair(a,c));
    }
    pq.push({0,start});

    while(!pq.empty()){

        int locate = pq.top().second;
        int cost = -pq.top().first;

        pq.pop();

        if(dist[locate] < cost)
            continue;

        for(int i=0;i<vt[locate].size();i++){

            int there = vt[locate][i].first;
            int next_d = cost + vt[locate][i].second;

            if(dist[there] > next_d){
                dist[there] = next_d;
                pq.push(make_pair(-next_d,there));
            }
        }
    }
    pq.push({0,start});

    while(!pq.empty()){

        int locate = pq.top().second;
        int cost = -pq.top().first;

        pq.pop();

        if(d[locate] < cost)
            continue;

        for(int i=0;i<vv[locate].size();i++){

            int there = vv[locate][i].first;
            int next_d = cost + vv[locate][i].second;

            if(d[there] > next_d){
                d[there] = next_d;
                pq.push(make_pair(-next_d,there));
            }
        }
    }
    for(int i=1;i<=v;i++)
        mx=max(mx,dist[i]+d[i]);
    
    printf("%d",mx);
    return 0;
}
