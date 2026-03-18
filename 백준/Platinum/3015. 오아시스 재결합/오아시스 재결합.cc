#include<bits/stdc++.h>
using namespace std;
stack<pair<int,int>> s;
int n, cur, same;
long long ans;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> cur;
        same=1;
        while(!s.empty() && s.top().first < cur){
            ans += s.top().second;
            s.pop();
        }
        if(!s.empty()){
            if(s.top().first == cur){
                ans += s.top().second;
                same = s.top().second + 1;
                if(s.size() > 1)
                    ans++;
                s.pop();    
            }
            else
                ans++;
        }
        s.push({cur,same});
    }
    cout << ans;    
    return 0;
}