#include <bits/stdc++.h>

using namespace std;
int n,m,v,a,b,ch[1001],ch1[1001];
vector<int> vt[1001];
queue<int>q;
void f(int num){
    for(int i=0;i<vt[num].size();i++)
        if(!ch[vt[num][i]]){
            ch[vt[num][i]]=1;
            cout<<vt[num][i]<<" ";
            f(vt[num][i]);
        }
}
void f1(){
    while(!q.empty()){
        int qq=q.front();
        cout << qq << " ";
        for(int i=0;i<vt[qq].size();i++)
            if(!ch1[vt[qq][i]]){
                q.push(vt[qq][i]);
                ch1[vt[qq][i]]=1;
            }
        q.pop();
    }
}
int main(){

    freopen("input.txt","r",stdin);
    cin >> n >> m >> v;
    ch[v]=1;ch1[v]=1;
    for(int i=0;i<m;i++){
        cin >> a >> b;
        vt[a].push_back(b);
        vt[b].push_back(a);
    }
    for(int i=1;i<=n;i++)
        sort(vt[i].begin(),vt[i].end());
    cout<<v<<" ";
    f(v);
    cout<<"\n";
    q.push(v);
    f1();
    return 0;
}
