#include<bits/stdc++.h>
using namespace std;
int n, nn, ans;
stack<int>s;
string a;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    while(1){
        getline(cin, a);
        if(a==".")
            break;
        nn = a.size();
        for(int j=0;j<nn;j++){
            if(!s.empty() && s.top()=='(' && a[j] == ')')
                s.pop();
            else if(!s.empty() && s.top()=='[' && a[j] == ']')
                s.pop();
            else if(a[j]=='('||a[j]==')'||a[j]=='['||a[j]==']')
                s.push(a[j]);
        }
        
        if(s.empty())
            cout <<"yes\n";
        else{
            cout<<"no\n";
            while(!s.empty())
                s.pop();
        }
    }
	return 0;
}