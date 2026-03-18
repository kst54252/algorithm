#include<bits/stdc++.h>
using namespace std;
int a[1002], b[1002];
int n, m, x, y, mx, xx, yy;
queue<int> q;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    cin >> m;
    for(int i=0;i<m;i++)
        cin >> b[i];
    for(int t=0;t<100;t++){
        mx=0;
        for(int i=x;i<n;i++)
            for(int j=y;j<m;j++){
                if(a[i]==b[j] && mx < a[i]){
                    mx = a[i];
                    xx = i;
                    yy = j;
                }
            }
        if(mx==0)
            break;
        q.push(mx);
        x=xx+1;
        y=yy+1;
    }
    cout << q.size()<<"\n";
    while(!q.empty()){
        cout << q.front()<<" ";
        q.pop();
    }
}