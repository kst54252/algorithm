#include <bits/stdc++.h>

using namespace std;
int n,a;
vector<int> v;
vector<int>::iterator it;
int main()
{
    //freopen("input.txt","r",stdin);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        it=lower_bound(v.begin(),v.end(),a);
        if(it==v.end())
            v.push_back(a);
        else
            v[it-v.begin()]=a;
    }
    printf("%d",v.size());
    return 0;
}
