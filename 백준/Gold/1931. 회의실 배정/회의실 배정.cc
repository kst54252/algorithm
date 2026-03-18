#include <bits/stdc++.h>

using namespace std;
int n,a,b,c,ans;
pair<int,int>p[100001];
int main()
{
    //freopen("input.txt","r",stdin);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d %d",&p[i].first,&p[i].second);
    sort(p,p+n);
    for(int i=0;i<n;i++){
        if(p[i].first>=c){
            ans++;
            c=p[i].second;
        }
        else if(p[i].second<c)
            c=p[i].second;
    }
    printf("%d",ans);
    return 0;
}
