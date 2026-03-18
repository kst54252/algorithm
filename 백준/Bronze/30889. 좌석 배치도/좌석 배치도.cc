#include<bits/stdc++.h>
using namespace std;
int n;
string s[11], ss;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n;
    for(int i=1;i<=10;i++)
        for(int j=1;j<=20;j++)
            s[i]+=".";

    for(int i=0;i<n;i++){
        cin >> ss;
        s[ss[0]-'A'+1][stoi(ss.substr(1, ss.size()-1))-1] = 'o';
    }

    for(int i=1;i<=10;i++)
        cout << s[i] <<"\n";
    
}