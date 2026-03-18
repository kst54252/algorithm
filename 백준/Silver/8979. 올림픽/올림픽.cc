#include <bits/stdc++.h>

using namespace std;
int n,m,a,b,c,d;
struct A{
    int nm;
    int gd;
    int sv;
    int bz;
}z[1001];
bool com(A p, A q){
    if(p.gd==q.gd){
        if(p.sv==q.sv){
            return p.bz>q.bz;
        }
        else
            return p.sv>q.sv;
    }
    else
        return p.gd>q.gd;
}
int main()
{
    //freopen("input.txt","r",stdin);
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d %d %d %d",&z[i].nm,&z[i].gd,&z[i].sv,&z[i].bz);
    }
    sort(z,z+n,com);
    d=1;
    for(int i=0;i<n;i++){
        if(a!=z[i].gd||b!=z[i].sv||c!=z[i].bz)
            d=i+1;
        if(m==z[i].nm){
            printf("%d",d);
            break;
        }
        a=z[i].gd;
        b=z[i].sv;
        c=z[i].bz;
    }

    return 0;
}