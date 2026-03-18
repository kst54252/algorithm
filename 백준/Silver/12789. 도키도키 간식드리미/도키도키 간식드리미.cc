#include<bits/stdc++.h>
using namespace std;
int n, a, cnt=1, ch;
stack<int> s;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        ch=0;
        cin >> a;
        if(a == cnt){
            cnt++;
            ch=1;
        }
        for(int j=0;j<n;j++)
            if(!s.empty() && s.top()==cnt){
                s.pop();
                cnt++;
                ch=1;
            }
        if(!ch)
            s.push(a);
    }
    
    if(cnt == n+1)
        cout <<"Nice";
    else
        cout <<"Sad";
	return 0;
}