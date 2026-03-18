#include <bits/stdc++.h>

using namespace std;
string s,s1;
int d[1001][1001];
int main()
{
    //freopen("input.txt","r",stdin);
    cin >> s >> s1;
    for(int i=1;i<=s.size();i++)
        for(int j=1;j<=s1.size();j++){
            d[i][j]=max(d[i-1][j],d[i][j-1]);
            if(s[i-1]==s1[j-1])
                d[i][j]=d[i-1][j-1]+1;

        }
 

    printf("%d",d[s.size()][s1.size()]);
    return 0;
}
