#include<bits/stdc++.h>
using namespace std;
int n,cnt[30],cnt1[30];
char s[200005];
string st="Yes";
int main(){
    cin >> n;
    cin >> s;
    for(int i=0;i<n;i++)
        cnt[s[i]-'a']++;
    if(n%2==1)
        cnt[s[n/2]-'a']--;
    for(int i=0;i<28;i++)
        if(cnt[i]%2!=0)
            st = "No";
    cout<<st;
    return 0;
}