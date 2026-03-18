#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int ans=1;
    cin >> s;
    for(int i=0;i<s.size()/2;i++)
        if(s[i]!=s[s.size()-i-1])
            ans=0;
    cout<<ans;
    return 0;
}
