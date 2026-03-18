#include <bits/stdc++.h>
#define INF 210000000
using namespace std;
int a,b,c,n,e,v1,v2,ans;
int ch[801];
vector<vector<int>>d;
vector<pair<int,int>> v[801];

vector<int> dijkstra(int src) {
	vector<int> dist(n+1, INF);
	dist[src] = 0;
	priority_queue<pair<int, int> > pq;
	pq.push(make_pair(0, src));
	while(!pq.empty()) {
		int cost = -pq.top().first;
		int here = pq.top().second;
		pq.pop();

		if(dist[here] < cost) continue;

		for(int i = 0; i < v[here].size(); ++i) {
			int there = v[here][i].first;
			int nextDist = cost + v[here][i].second;

			if(dist[there] > nextDist) {
				dist[there] = nextDist;
				pq.push(make_pair(-nextDist, there));
			}
		}
	}
	return dist;
}


int main()
{
    //freopen("input.txt","r",stdin);
    scanf("%d %d",&n,&e);

    for(int i=0;i<e;i++){
        scanf("%d %d %d",&a,&b,&c);
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }
    scanf("%d %d",&v1,&v2);

    d.push_back(dijkstra(1));
    d.push_back(dijkstra(v1));
    d.push_back(dijkstra(v2));

    ans = min(d[0][v1]+d[1][v2]+d[2][n],d[0][v2]+d[2][v1]+d[1][n]);
    if(ans<200000000&&ans>=0)
        printf("%d",ans);
    else
        printf("-1");

    return 0;
}
