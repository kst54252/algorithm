#include<bits/stdc++.h>
using namespace std;
int n, a;
string s;
queue<int> q;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin  >> s;
        if(s == "push"){
            cin >> a;
            q.push(a);
        }
        else if(s == "front"){
            if(q.empty())
                cout<<"-1\n";
            else
                cout << q.front() <<"\n";
        }
        else if(s == "pop"){
            if(q.empty())
                cout<<"-1\n";
            else{
                cout << q.front() <<"\n";
                q.pop();
            }
        }
        else if(s == "size")
            cout << q.size() <<"\n";
        else if(s == "empty")
            cout << q.empty() <<"\n";
        else if(s == "back"){
            if(q.empty())
                cout<<"-1\n";
            else
                cout << q.back() <<"\n";
        }
    }
	return 0;
}