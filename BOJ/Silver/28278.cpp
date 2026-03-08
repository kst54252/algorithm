#include<bits/stdc++.h>
using namespace std;
stack<int> s;
int a, b, n;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a == 1){
            cin >> b;
            s.push(b);
        }
        else if(a == 2){
            if(s.empty())
                cout<<"-1\n";
            else{
                cout << s.top() <<"\n";
                s.pop();  
            }
        }
        else if(a == 3)
            cout << s.size()<<"\n";
        else if(a == 4)
            cout << s.empty()<<"\n";
        else{
            if(s.empty())
                cout<<"-1\n";
            else
                cout << s.top() <<"\n";
        }
    }
    return 0;
}
