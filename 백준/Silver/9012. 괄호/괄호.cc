#include<bits/stdc++.h>
using namespace std;
int n, nn, ans;
stack<int>s;
string a;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        nn = a.size();
        for(int j=0;j<nn;j++){
            if(!s.empty() && s.top()=='(' && a[j] == ')')
                s.pop();
            else
                s.push(a[j]);
        }
        
        if(s.empty())
            cout <<"YES\n";
        else{
            cout<<"NO\n";
            while(!s.empty())
                s.pop();
        }
    }
	return 0;
}