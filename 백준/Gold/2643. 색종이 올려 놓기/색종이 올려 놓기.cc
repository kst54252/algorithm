#include <bits/stdc++.h>

using namespace std;
int n,a,b,c;
vector<pair<int,int> >v;
vector<int>v1;
vector<int>::iterator it;
int main()
{
    //freopen("input.txt","r",stdin);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(a>b)
            v.push_back({b,a});
        else
            v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        it=upper_bound(v1.begin(),v1.end(),v[i].second);

        if(it==v1.end())
            v1.push_back(v[i].second);

        else
            v1[it-v1.begin()]=v[i].second;
    }
    printf("%d",v1.size());
    return 0;
}