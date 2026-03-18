#include <bits/stdc++.h>
#define INF 2100000000
using namespace std;
int n,m,x,y;
int a[101],ch[101];
queue<pair<int,int>>q;

int main(){

    //freopen("input.txt","r",stdin);
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n >> m;
    for(int i=0;i<n+m;i++){
        cin >> x >> y;
        a[x]=y;
    }
    q.push({1,0});

    while(!q.empty()){
        int nm = q.front().first;
        int cnt = q.front().second;

        if(nm==100){
            cout<<cnt;
            return 0;
        }
        for(int i=1;i<=6;i++)
            if(nm+i<=100){
                int nx=nm+i;

                while(a[nx])
                    nx=a[nx];


                if(!ch[nx]){
                    q.push({nx,cnt+1});
                    ch[nx]=1;
                }
        }
        q.pop();
    }

    return 0;
}
