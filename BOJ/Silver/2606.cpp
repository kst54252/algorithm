#include <bits/stdc++.h>

using namespace std;

int n,m,a,b,qq,ans,ch[101]={0,1};
vector<int>v[101];
queue<int> q;
int main()
{
    //freopen("input.txt","r",stdin);
    scanf("%d",&n);
    scanf("%d",&m);

    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    q.push(1);
    while(!q.empty()){
        qq=q.front();
        for(int i=0;i<v[qq].size();i++)
            if(!ch[v[qq][i]]){
                ch[v[qq][i]]=1;
                q.push(v[qq][i]);
            }
        q.pop();
    }
    for(int i=2;i<=100;i++)
        if(ch[i])
            ans++;
    cout<<ans;
    return 0;
}
