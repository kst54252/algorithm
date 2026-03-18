#include<bits/stdc++.h>
using namespace std;
int cnt;
queue<pair<int,int>> q;
void f(int n, int start, int mid, int end){
    if(n == 1){
        q.push({start, end});
        cnt++;
    }
    else{
        f(n-1, start, end, mid);
        q.push({start, end});
        cnt++;
        f(n-1, mid, start, end);
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    f(n, 1, 2, 3);
    cout << cnt <<"\n";
    while(!q.empty()){
        cout << q.front().first <<" "<< q.front().second <<"\n";
        q.pop(); 
    }
}