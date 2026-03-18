#include <bits/stdc++.h>

using namespace std;
string s;
int ch[26];
int main()
{
    cin>>s;
    for(int i=0;i<26;i++)
        ch[i]=-1;
    for(int i=0;i<s.size();i++){
        if(ch[s[i]-'a']==-1)
            ch[s[i]-'a']=i;
    }
    for(int i=0;i<26;i++)
        printf("%d ",ch[i]);
    return 0;
}
