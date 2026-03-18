#include <bits/stdc++.h>

using namespace std;
int a,b,x,y;
queue<pair<int,int>> q;
int main()
{
    scanf("%d %d",&a,&b);
    q.push({b,0});
    while(!q.empty()){
        x=q.front().first;
        y=q.front().second;
        if(x==a){
            printf("%d",y+1);
            return 0;
        }
        if(x%10==1)
            q.push({x/10,y+1});
        if(x%2==0&&x!=0)
            q.push({x/2,y+1});
        q.pop();
    }
    printf("-1");
    return 0;
}
