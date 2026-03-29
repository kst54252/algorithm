#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int n;
    string s;
    cin >> n;
    cin >> s;
    int cnt = 0, num = 0;
    for(int i=0;i<n;i++){
        if(num*10+s[i]-'0' > 641){
            cnt++;
            num = s[i]-'0';
        }
        else
            num = num * 10 + s[i] - '0';

    }
    cout << cnt+1;
    return 0;
}