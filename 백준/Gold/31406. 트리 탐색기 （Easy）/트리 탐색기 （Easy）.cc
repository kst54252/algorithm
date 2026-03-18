#include<bits/stdc++.h>
using namespace std;
int n, q, m, a,xxxx,cur,cur_n = 1, cnt;
int open[2001];
vector<int> v[2001];
string s;
void f(int x){
    for(int i=0;i<v[x].size();i++){
        cnt++;
        xxxx=v[x][i];
        if(cnt == cur_n){
                cur = v[x][i];
                return;
            }
        if(open[v[x][i]])
            f(v[x][i]);
        
    }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> q;
        
    for(int i=1;i<=n;i++){
        cin >> m;
        for(int j=0;j<m;j++){
            cin >> a;
            v[i].push_back(a);
        }
    }
    cur=v[1][0];
    for(int i=0;i<q;i++){
        cin >> s;
        if(s[0]=='t'){
            open[cur]+=1;
            open[cur]%=2;
        }
        else{
            cin >> m;
            cur_n += m;
            if(cur_n<=1){
                cur_n=1;
                cur = v[1][0];
            }
            else{
            cnt=0;
            f(1);
            if(cnt<cur_n){
                cur_n=cnt;
                cur = xxxx;
            }
            }
            cout << cur <<"\n";
            
        }

    }
    return 0;
}