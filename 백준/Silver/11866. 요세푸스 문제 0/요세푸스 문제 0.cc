#include<bits/stdc++.h>
using namespace std;
int n, k, cnt=1;
queue<int> q, ans;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    for(int i=1;i<=n;i++)
        q.push(i);
    while(!q.empty()){
        if(cnt==k){
            cnt=1;
            ans.push(q.front());
            q.pop();
        }
        else{
            q.push(q.front());
            cnt++;
            q.pop();
        }
    }
    cout <<"<"<< ans.front();
    ans.pop();
    while(!ans.empty()){
        cout <<", "<< ans.front();
        ans.pop();
    }
    cout<<">";
	return 0;
}