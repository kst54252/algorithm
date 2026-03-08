#include <bits/stdc++.h>

using namespace std;
int n,m,a[10];
vector<int> v;

void f(vector<int>vv,int cnt){
    if(cnt==m){
        for(int i=0;i<m;i++)
            printf("%d ",vv[i]);
        printf("\n");
    }
    else
        for(int i=0;i<n;i++)
            if(cnt==0||vv[cnt-1]<=a[i]){
                vv.push_back(a[i]);
                f(vv,cnt+1);
                vv.pop_back();
            }

}


int main()
{
    scanf("%d %d",&n,&m);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    sort(a,a+n);

    f(v,0);


    return 0;
}
