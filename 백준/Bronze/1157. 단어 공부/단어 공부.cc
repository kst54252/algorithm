#include <bits/stdc++.h>

using namespace std;
string s;
int ch[30],m=0,cnt=0;
int main()
{
    cin >>s;

    for(int i=0;i<s.size();i++){
        if(s[i]>='a')
            s[i]-=32;
        ch[s[i]-65]++;
    }

    for(int i=0;i<30;i++)
        m=max(m,ch[i]);
    for(int i=0;i<30;i++)
        if(ch[i]==m)
            cnt++;

    if(cnt>1)
        printf("?");

    else
        for(int i=0;i<30;i++)
            if(ch[i]==m)
                printf("%c",i+65);
    return 0;
}
