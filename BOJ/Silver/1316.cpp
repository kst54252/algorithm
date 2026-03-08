#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ch[30],ans=0,k;
    string s;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<30;j++)
            ch[j]=0;
        cin >> s;
        ch[s[0]-'a']=1;
        k=0;
        for(int j=1;j<s.size();j++){
            if(s[j]!=s[j-1] && ch[s[j]-'a'] == 1)
                k=1;
            ch[s[j]-'a']=1;
        }
        if(!k)
            ans++;
    }
    cout << ans;
    return 0;
}