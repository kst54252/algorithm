#include <bits/stdc++.h>

using namespace std;
int n,cnt;
queue<int>q;
int main()
{
    cin >>n;
    for(int i=1;i<=n;i++)
        q.push(i);
    while(q.size()!=1){
        if(cnt%2==0)
            q.pop();
        else{
            q.push(q.front());
            q.pop();
        }
        cnt++;
    }
    cout<<q.front();
    return 0;
}
