#include<bits/stdc++.h>
using namespace std;
int n,a[20][20],b[4],ans=INT_MAX,t1,t2;
vector<int> team1, team2;
void f(int cnt){
    if(cnt == n){
        ans = min(ans, abs(t1-t2));
        return;
    }
    if(team1.size()<n/2){
        for(int i=0;i<team1.size();i++)
            t1+=(a[cnt][team1[i]]+a[team1[i]][cnt]);
        team1.push_back(cnt);
        f(cnt+1);
        team1.pop_back();
        for(int i=0;i<team1.size();i++)
            t1-=(a[cnt][team1[i]]+a[team1[i]][cnt]);
    }
    if(team2.size()<n/2){
        for(int i=0;i<team2.size();i++)
            t2+=(a[cnt][team2[i]]+a[team2[i]][cnt]);
        team2.push_back(cnt);
        f(cnt+1);
        team2.pop_back();
        for(int i=0;i<team2.size();i++)
            t2-=(a[cnt][team2[i]]+a[team2[i]][cnt]);
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> a[i][j];
    team1.push_back(0);
    f(1);
    cout << ans;
}

