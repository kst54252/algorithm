#include <bits/stdc++.h>

using namespace std;
int n, ans,cnt=1;
string s;
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        cin>>s;
        ans=0;
        cnt=1;
        for(int j=0;j<s.size();j++){
            if(s[j]=='O'){
                ans+=cnt;
                cnt++;
            }
            else
                cnt=1;
        }
        printf("%d\n",ans);
    }
    return 0;
}
