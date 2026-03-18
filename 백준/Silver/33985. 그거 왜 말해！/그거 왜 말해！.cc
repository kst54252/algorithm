#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, cnt=0;
    string s;
    cin >> n >> s;
    for(int i=0;i<s.size();i++)
        if(s[i]=='A')
            cnt++;   
    if(cnt == 0 ){
        cout << "No";
        return 0;
    }
    else if(s[s.size()-1] == 'A' || s[0] == 'B'){
        cout << "No";
        return 0;
    }
    cout << "Yes";
    return 0;
}