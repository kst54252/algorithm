#include<bits/stdc++.h>
using namespace std;
int n, cnt, ans,union_cnt, a[3000][4],ch[3000];
vector<int>v[3000];
int ccw(pair<long long, long long>p1, pair<long long, long long>p2, pair<long long, long long>p3) {
    long long s = p1.first * p2.second + p2.first * p3.second + p3.first * p1.second;
    s -= (p1.second * p2.first + p2.second * p3.first + p3.second * p1.first);
    if (s > 0)
        return 1;
    else if (s == 0)
        return 0;
    else
        return -1;
}
bool f(pair<pair<int, int>, pair<int, int>> l1, pair<pair<int, int>, pair<int, int>> l2) {
    pair<int, int>p1 = l1.first;
    pair<int, int>p2 = l1.second;
    pair<int, int>p3 = l2.first;
    pair<int, int>p4 = l2.second;

    int p1p2 = ccw(p1, p2, p3) * ccw(p1, p2, p4);
    int p3p4 = ccw(p3, p4, p1) * ccw(p3, p4, p2);

    if (p1p2 == 0 && p3p4 == 0) {
        if (p1 > p2) swap(p2, p1);
        if (p3 > p4) swap(p3, p4);
        return (p1 <= p4 && p3 <= p2);
    }
    return (p1p2 <= 0 && p3p4 <= 0);
}
void union_find(int x){
    cnt++;
    for(int i=0;i<v[x].size();i++)
        if(!ch[v[x][i]]){
            ch[v[x][i]]=1;
            union_find(v[x][i]);
        }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(f({{a[i][0],a[i][1]},{a[i][2],a[i][3]}},{{a[j][0],a[j][1]},{a[j][2],a[j][3]}})){
                v[i].push_back(j);
                v[j].push_back(i);
            }
    for(int i=0;i<n;i++){
        if(!ch[i]){
            ch[i] = 1;
            union_cnt++;
            cnt=0;
            union_find(i);
            ans = max(ans,cnt);
        }
    }
    cout <<union_cnt<<"\n"<<ans;
}