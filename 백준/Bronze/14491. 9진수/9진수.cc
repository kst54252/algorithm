#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    stack<int>s;
    while(n > 0){
        s.push(n%9);
        n/=9;
    }
    while(!s.empty()){
        cout << s.top();
        s.pop();
    }
    return 0;
}