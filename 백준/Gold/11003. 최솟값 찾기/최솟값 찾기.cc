#include <bits/stdc++.h>

using namespace std;
int n,l,a,mn,ch;
deque<pair<int,int> > d;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    scanf("%d %d",&n,&l);
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        if(d.size()&&d[0].second<i-l+1)
            d.pop_front();
        while(d.size()&&d[d.size()-1].first>=a)
            d.pop_back();
        d.push_back({a,i});

        printf("%d ",d[0].first);
    }
    return 0;
}
