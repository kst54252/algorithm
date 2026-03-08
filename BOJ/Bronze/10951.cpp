#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int cnt=0;
    getline(cin, s);
    s+=" ";
    for(int i=1;i<s.size();i++)
        if(s[i]==' '&&s[i-1]!=' ')
            cnt++;

    printf("%d",cnt);
    return 0;
}
