#include <bits/stdc++.h>

using namespace std;
int n,r,c,ans;

void z(int x,int y,int size){
    if(x==r&&y==c){
        printf("%d\n",ans);
        return;
    }
    if(r<x+size&&r>=x&&c<y+size&&c>=y){
        z(x,y,size/2);
        z(x,y+size/2,size/2);
        z(x+size/2,y,size/2);
        z(x+size/2,y+size/2,size/2);
    }
    else
        ans+=size*size;
}
int main()
{
    scanf("%d %d %d",&n,&r,&c);
    z(0,0,(1<<n));
    return 0;
}
