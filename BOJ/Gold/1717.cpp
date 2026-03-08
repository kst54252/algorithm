#include <bits/stdc++.h>

using namespace std;

int n, m, a, b, c, parent[1000001];

int get_parent(int x){
    if(parent[x]==x)
        return x;
    return parent[x]=get_parent(parent[x]);
}

void union_parent(int a, int b){
    a=get_parent(a);
    b=get_parent(b);
    if(a>b)
        parent[a]=b;
    else
        parent[b]=a;

}
void find_parent(int a, int b){
    a=get_parent(a);
    b=get_parent(b);
    if(a==b)
        printf("YES\n");
    else
        printf("NO\n");
}

int main()
{
    freopen("input.txt","r",stdin);

    scanf("%d %d",&n, &m);
    for(int i=1;i<=n;i++)
        parent[i]=i;
    for(int i=0;i<m;i++){
        scanf("%d %d %d", &a, &b, &c);
        if(!a){
            union_parent(b,c);
        }
        else{
            find_parent(b,c);

        }
    }
    return 0;
}
