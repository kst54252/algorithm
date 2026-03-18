#include <bits/stdc++.h>
using namespace std;
int n,b,c,arr[200001][30];
char a;
string s;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> s;
    for(int i=0;i<s.size();i++){
        arr[i+1][s[i]-'a']++;
        for(int j=0;j<28;j++)
            arr[i+1][j]+=arr[i][j];
    }

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b >> c;
        cout << arr[c+1][a-'a']-arr[b][a-'a'] <<"\n";
    }
    return 0;
}
